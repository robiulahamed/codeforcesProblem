//https://codeforces.com/problemset/problem/1972/B
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
    string s;cin>>s;
    int c=0;
    for(auto i:s){
        if(i=='U') c++;
    }
    if(c&1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    }
    return 0;
}