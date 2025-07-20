#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 map<int,int>mp;
int ans=0;

 for(int i=0;  i<n; i++){
    int a;cin>>a;
    mp[a]++;
    ans=max(ans,mp[a]);
 }
   

 cout<<ans<<endl;
return 0;
}