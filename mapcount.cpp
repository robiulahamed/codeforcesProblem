#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  map<string,int>mp;
  
  for(int i=0; i<n;  i++){
    string s;cin>>s;
    
    mp[s]++;
  } 
  int mx=0;
  string s1="";
  
  for(auto i:mp){
    if(i.second>mx){
        mx=i.second;
        s1=i.first;

    }
  }
  cout<<s1<<endl;
  

return 0;
}