#include<bits/stdc++.h>
#define REP(N) for(int i = 0; i < N; i++)
using namespace std;
const int INF = 1e9 + 7;

class State{
  public:
    int step, node, kenkenpa;
    State(int s, int n, int k) { step = s; node = n; kenkenpa = k; }
    bool operator > (const State& s) const { return step > s.step; }
};

int dijkstra(int N, int S, int T, vector< vector<int> >& graph){
  vector< vector<int> > dist(N, vector<int>(4, INF));
  dist[S][0] = 0;
  priority_queue< State, vector<State>, greater<State> > q;
  q.push(State(0, S, 0));

  while(!q.empty()){
    State s = q.top(); q.pop();
    if(dist[s.node][s.kenkenpa] < s.step) continue;
    for(int next : graph[s.node]) {
      int next_kenkenpa = s.kenkenpa == 3 ? 1 : s.kenkenpa + 1;
      if(s.step + 1 >= dist[next][next_kenkenpa]) continue;
      dist[next][next_kenkenpa] = s.step + 1;
      q.push(State(s.step + 1, next, next_kenkenpa));
    }
  }
  int ans = min(dist[T][0], dist[T][3]);
  return ans == INF ? -1 : ans / 3;
}

int main(){
  int N, M; cin >>N >>M;
  vector< vector<int> > graph(N, vector<int>());
  REP(M){
    int a, b; cin >>a >>b;
    graph[a - 1].push_back(b - 1);
  }
  int S, T; cin >>S >>T;
  cout <<dijkstra(N, S - 1, T - 1, graph) <<endl;
  return 0;
}
