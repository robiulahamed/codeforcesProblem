//https://codeforces.com/problemset/problem/1918/B
#include<bits/stdc++.h>
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
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0,b; i<n; i++){
        cin>>b;
        mp[v[i]]=b;

    }
    sort(v.begin(),v.end());
    for(auto i:v) cout<<i<<" ";
    cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<mp[v[i]]<<" ";
    }
    cout<<"\n";
    }
    return 0;
}