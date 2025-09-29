//https://codeforces.com/problemset/problem/1872/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector< pair<int,int>>mp;
    for(int i=0,a,b; i<n ;  i++){
        cin>>a>>b;
        mp.push_back({a,b});
      
    }
    vector<int>v;
   for(auto &it:mp){
      if(it.second%2==0){
        int s =it.first+(it.second/2)-1;
        v.push_back(s);
      }
      else{
        int s=it.first+(it.second/2);
        v.push_back(s);
      }
   }
   sort(v.begin(),v.end());
   cout<<v[0]<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}