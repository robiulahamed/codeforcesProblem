//https://codeforces.com/problemset/problem/1954/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int al =n/m;
        int al2= n-(al*m);
        if(al2>0) k++;
        int f=0;
        if(n-al<=k) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}