#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N; cin >>N;
  vector<int> ds(N);
  for(int& d : ds) cin >>d;
  sort(ds.begin(), ds.end());
  cout <<ds[N / 2] - ds[N / 2 - 1] <<endl;
  return 0;
}
