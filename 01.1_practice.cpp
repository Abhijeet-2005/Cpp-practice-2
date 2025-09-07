#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
  for(int i=0;i<v.size;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int>v;
  int element,size;
  {
    cout<<"Enter the size you want to of vector: ";
    cin>>size;
    for(int i=0;i<v.size;i++){
  
    cout<<"Enter the element : ";
    cin>>element;
    v.push_back();
    cout<<"Ascending : ";
    sort(v.begin(),v.end());
    display.v;
    
    cout<<"descending : ";
    reverse(v.begin(),v.end());
    display.v;
    
    cout<<"Maximum : "<<*max_element(v.begin(),v.end());
    cout<<"Minimum :"<<*mim_element(v.begin(),v.end());
    }
  }
  
  return 0;
}
