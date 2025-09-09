#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
  string str;
  cout<<" Enter a string:- ";
  cin>>str;

  map < char,
  int > freq;

  for(char c: str) {
    freq[c]++;
  }
  for(auto iter: freq) {
    cout<<"string:- "<<iter.first<<"->"<<iter.second<<endl;
  }
  return 0;
}