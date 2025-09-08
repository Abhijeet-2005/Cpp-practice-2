#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
  map<string ,int > mp;
  mp["Abhi"]=98;
  mp["mrudul"]=97;
  mp["sanskar"]=88;
  mp["rajan"]=99;
  mp["Satish"]=58;
  
  map<string,int> :: iterator it;
  for(it=mp.begin();it!=mp.end();it++){
    cout<<"Student Name:- "(*it).first<<" And Marks:-"<<(*it).second<<"\n";
  }
  return 0;
}