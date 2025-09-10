#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
  map<string,int> freq;
  string word;
  cout<<"Enter a word(After completion of input type STOP:- ";
  while(cin>>word){
    if(word == "STOP") break;
  freq[word]++;
  }
  
  for(auto iter:freq){
    cout<<iter.first<<"->"<<iter.second<<endl;
  }
  return 0;
}