#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 map<int,int>mp;
 for(int i=0,x; i<n;   i++){
    cin>>x;
    mp[x]++;
 }
 for(int i=0,x; i<k; i++){
    cin>>x;
    auto it = mp.upper_bound(x);
    if(it==mp.begin()){
        cout<<-1<<endl;
        continue;
    }
    it--;
    cout<<it->first<<endl;
    mp[it->first]--;
    if(mp[it->first]==0) mp.erase(it->first);
 }
return 0;
}