#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
  set<int> s;
  int data;
  cout<<"Enter the number(enter -1 to stop): ";
  
  while(cin>>data){
    if(data == -1) break;
    
    s.insert(data);
  }
  cout<<"unique number in ascending order:";
for(auto x : s) 
{
  cout << x << " ";
}
  cout<<endl;
  return 0;
}