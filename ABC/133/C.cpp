#include<bits/stdc++.h>
#define REP(N) for(int i = 0; i < N; i++)
using namespace std;
const int MOD = 2019;

int main(){
  int L, R; cin >>L >>R;
  if(R - L > MOD) cout <<0 <<endl;
  else {
    int ans = 1e9;
    for(int i = L; i <= R; i++){
      for(int j = i + 1; j <= R; j++){
	ans = min(ans, ((i % MOD) * (j % MOD)) % MOD);
      }
    }
    cout <<ans <<endl;
  }
  return 0;
}
