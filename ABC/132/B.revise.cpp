#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX_N = 20;

int main(){
  int N, p[MAX_N]; cin >>N;
  for(int i = 0; i < N; i++) cin >>p[i];
  int cnt = 0;
  for(int i = 1; i < N - 1; i++){
    if((p[i - 1] < p[i] && p[i] < p[i + 1]) || (p[i - 1] > p[i] && p[i] > p[i + 1])) cnt++;
  }
  cout <<cnt <<endl;
  return 0;
}
