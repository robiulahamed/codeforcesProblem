#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 map<string,int>mp;
 for(int i=0; i<n; i++){
    string s;
    cin>>s;
    mp[s]++;

 }
 int mx=0;
 for(pair<string,int>a : mp){
    if(a.second>mx) mx=a.second;

 }
 for(pair<string,int>a : mp){
    if(a.second==mx) cout<<a.first<<endl;

 }
 
return 0;
}