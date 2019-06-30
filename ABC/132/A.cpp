#include<iostream>
#include<string>
#include<map>
using namespace std;

string solve(string input);

int main(){
  string input;
  cin >> input;
  cout <<solve(input) <<endl;
}

string solve(string s){
  map<char, int> count;
  for(char &c : s) {
    if(count.find(c) == count.end()) {
      count[c] = 0;
    }
    count[c] += 1;
  }
  if(count.size() != 2){ return "No"; }
  for(auto& p : count){
    if(p.second != 2){ return "No"; }
  }
  return "Yes";
}
