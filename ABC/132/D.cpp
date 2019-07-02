#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
const long long int M = 1e9 + 7, MAX_N = 2010;
int C[MAX_N][MAX_N];

int main(){
  C[0][0] = 1;
  for(int i = 1; i < MAX_N; i++){
    for(int j = 0; j <= i; j++){
      if(j - 1 >= 0) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % M;
      else C[i][j] = C[i - 1][j];
    }
  }
  int N, K; cin >>N >>K;
  for(int i = 1; i <= K; i++){
    long long int r = i, n = N - K + 1;
    long long int ans = C[n][r];
    cout <<ans * C[K - 1][i - 1] % M <<endl;
  }
  return 0;
}
