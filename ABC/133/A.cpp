#include<bits/stdc++.h>
#define REP(N) for(int i = 0; i < N; i++)
using namespace std;

int main(){
  int N, A, B; cin >>N >>A >>B;
  int a = N * A, b = B;
  cout <<(a > b ? b : a) <<endl;
  return 0;
}
