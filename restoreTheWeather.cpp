//https://codeforces.com/problemset/problem/1833/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
   vector<pair<int,int>>vp(n);
   for(int i=0; i<n;  i++){
    cin>>vp[i].first;
    vp[i].second=i;
   }
   sort(vp.begin(),vp.end());
   vector<int>b(n);
   for(int i=0; i<n; i++) cin>>b[i];
   sort(b.begin(),b.end());
   vector<int>ans(n);
   for(int i=0; i<n;  i++){
    ans[vp[i].second]=b[i];
   }
   for(auto i:ans) cout<<i<<" ";
   cout<<endl;
       

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