
//https://codeforces.com/contest/2151/problem/A
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,m; cin>>n>>m;
    vector<int>v(m);
    for(int i=0; i<m; i++) cin>>v[i];
    int f=1;

    if(m!=1){
        for(int i=0;  i<m-1;  i++){
            if(v[0]>=v[i+1]){
                f=0;
                break;
            }
        }
    }
    if(m!=1 && f==1){
        for(int i=m-1; i>=1; i--){
            if(v[m-1]<=v[i-1]){
                f=0;
                break;
            }
        }
    }

    int ans=1;
    if(f==0){
        cout<<ans<<endl;
    }
    else{

        ans=n-v[m-1];
        ans++;
        cout<<ans<<endl;
    }

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