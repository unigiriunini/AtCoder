#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N; cin >>N;
  vector<int> vec(N);
  for(int& n : vec) { cin >>n; }
  int cnt = 0;
  vector<int> tmpv(3);
  for(int i = 1; i < N - 1; i++){
    tmpv[0] = vec[i - 1];
    tmpv[1] = vec[i];
    tmpv[2] = vec[i + 1];
    sort(tmpv.begin(), tmpv.end());
    if(tmpv[1] == vec[i]) cnt++;
  }
  cout <<cnt <<endl;
  return 0;
}
