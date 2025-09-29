//https://codeforces.com/problemset/problem/1904/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    vector<int>vx = {-a,b,b,a,a,-b,-b,-a};
    vector<int>vy = {b,-a,a,b,-b,a,-a,-b};
    set<pair<long ,long>>sk,sq;
    for(int i=0; i<8; i++){
        sk.insert({xk+vx[i],yk+vy[i]});

    }
    for(int i=0; i<8; i++){
        sq.insert({xq+vx[i], yq+vy[i]});
    }
    int ans=0;
    for(auto i:sk){
        if(sq.find(i)!=sq.end()){
            ans++;
        }
    }
    cout<<ans<<endl;

    }
    return 0;
}