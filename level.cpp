#include<bits/stdc++.h>//https://codeforces.com/contest/2131/problem/A
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
         int n;cin>>n;
         vector<int>v(n);
         for(int i=0; i<n; i++) cin>>v[i];
         int ans=0;
         for(int i=0; i<n; i++){
            int tmp;
            cin>>tmp;
            ans+=max(0,v[i]-tmp);
         }
         ans++;
         cout<<ans<<endl;
    }
    return 0;
}