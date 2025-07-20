#include<bits/stdc++.h>
using namespace std;
int main(){
 long long t;cin>>t;
 while(t--){
    long long n;cin>>n;
    string s;cin>>s;
    map<int,char>mp;
    for(int i=0; i<n;  i++){
        mp[s[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
 }
return 0;
}