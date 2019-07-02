#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7, MAX_N = 2010;
int C[MAX_N][MAX_N];

int main(){
  for(int i = 0; i < MAX_N; i++){
    C[i][0] = 1;
    for(int j = 1; j <= i; j++) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % M;
  }
  int N, K; cin >>N >>K;
  for(int i = 1; i <= K; i++) cout <<1ll * C[N - K + 1][i] * C[K - 1][i - 1] % M <<endl;
  return 0;
}
