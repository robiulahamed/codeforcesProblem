#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 map<pair<int,int>,string>mp;
 int a,b;
 string s;
 for(int i=0; i<n; i++){
    cin>>a>>b>>s;
    mp[{a,b}]=s;
 }
 int t;cin>>t;
 while(t--){
    cin>>a>>b;
    cout<<mp[{a,b}]<<endl;
 }
return 0;
}