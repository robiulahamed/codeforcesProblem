//https://codeforces.com/problemset/problem/1988/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    long long c=0;
    while(n>=2){
        n=n-(k-1);
        c++;
    }
    cout<<c<<endl;
    }
    return 0;
}