#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N, K = 0; cin >>N;
  vector<int> ds(N);
  for(int& d : ds){ cin >>d; }
  sort(ds.begin(), ds.end());
  for(int k = ds[0]; k <= ds[N - 1]; k++){
    int i = lower_bound(ds.begin(), ds.end(), k) - ds.begin();
    if(N / 2 == i) K++;
  }
  cout <<K <<endl;
  return 0;
}
