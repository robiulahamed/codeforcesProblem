#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 vector<int>v(t+1);
 map<int,int>mp;
 for(int i=1;  i<=t; i++){
    cin>>v[i];
 }
 long long ans=0;
 for(long long i=1; i<=t; i++){
    for(int p=0; p<=30; p++){
        long long s = (1<<p);
        long long  need = s-v[i];
        ans+= mp[need];
    }
    mp[v[i]]++;
 }
 cout<<ans<<endl;
return 0;
}