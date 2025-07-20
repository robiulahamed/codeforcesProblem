#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 vector<string>v;
 for(int i=0; i<n;  i++){
    string s;cin>>s;
    v.push_back(s);
 }
 map<string,bool>mp;
 for(int i=0; i<m; i++){
    string s;cin>>s;
    mp[s]=true;
 }
 int ans=0;
 for(auto i:v){
      string same=i.substr(3,3);
      if(mp[same]) ans++;
 }
 cout<<ans<<endl;
return 0;
}