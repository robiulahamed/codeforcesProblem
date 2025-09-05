//https://codeforces.com/contest/2013/problem/B
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
    long long s=0;
    if(n==1){
        cout<<v[0]<<endl;
        continue;
    }
    for(int i=0; i<n-2; i++){
        s+=v[i];
    }
     long long ans =s-v[n-2]+v[n-1];
     
     cout<<ans<<endl;
    }
    return 0;
}