//https://codeforces.com/problemset/problem/1848/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;cin>>x>>y;
    int f=0;
    while(k--){
        int a,b;
        cin>>a>>b;
        if((abs(a-x)+abs(b-y)) %2 ==0){
              f=1;
        }
    }
    if(f==0)cout<<"yes\n";
    else cout<<"no\n";


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