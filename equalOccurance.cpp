//https://codeforces.com/contest/2146/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
     vector<int>v(n);
     map<int,int>mp;
     set<int>st;
     for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
        st.insert(v[i]);
     }
     vector<int>vv;
     int mx=0,m=st.size();
     for(auto it :mp){
        // mx=max(mx,(it.second)*m)
        vv.push_back(it.second);
     }
     sort(vv.begin(),vv.end());
     for(int i=0; i<vv.size(); i++){
        mx=max(mx,vv[i]*m);
        m--;
     }
     cout<<mx<<endl;
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