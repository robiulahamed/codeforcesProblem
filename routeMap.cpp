#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 vector<string>v;
 for(int i=0;  i<n; i++){
    string s;cin>>s;
    v.push_back(s);
 }
 map<string,bool>mp;
 for(int i=0; i<m;  i++){
    string s;cin>>s;
    mp[s]=true;
 }
 for(int i=0; i<n;  i++){
    string a=v[i];
    if(mp[a]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
return 0;
}