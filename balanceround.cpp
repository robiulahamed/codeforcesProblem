//https://codeforces.com/problemset/problem/1850/D
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n;  i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int cnt=1;
    int mx=1;
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]<=k){
            cnt++;
        }
        else{
      
        cnt=1;
        }
        mx=max(mx,cnt);
    }
    cout<<n-mx<<"\n";
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