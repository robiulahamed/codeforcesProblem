//https://codeforces.com/problemset/problem/1875/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long  long >v(n),vf;
    for(int i=0; i<n; i++) cin>>v[i];
    long long pv = b;
    for(int i=0; i<n; i++){
         if(pv+v[i]>a){
            if(pv>a)
            vf.push_back(a);
            else vf.push_back(pv);
            pv=1;
         }
         pv+=v[i];

    }
    if(pv>a) vf.push_back(a);
    else vf.push_back(pv);
    long long ans=0;
    for(int i=0; i<vf.size(); i++){
        ans+=vf[i];
        ans--;
    }
    ans++;
    cout<<ans<<endl;
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