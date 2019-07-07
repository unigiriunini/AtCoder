#include<bits/stdc++.h>
#define REP(N) for(int i = 0; i < N; i++)
using namespace std;

double dist(vector<int>& a, vector<int>& b){
  int sum = 0;
  for(int i = 0; i < a.size(); i++) sum += (a[i] - b[i]) * (a[i] - b[i]);
  return sqrt(sum);
}

int main(){
  int N, D; cin >>N >>D;
  vector< vector<int> > v(N, vector<int>(D));
  for(int i = 0; i < N; i++) for(int j = 0; j < D; j++) cin >>v[i][j];
  int cnt = 0;
  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      double d = dist(v[i], v[j]);
      if(d == int(d)) cnt++;
    }
  }
  cout <<cnt <<endl;
  return 0;
}
