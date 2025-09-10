//https://codeforces.com/contest/2140/problem/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
       long long x;cin>>x;
       long long  y;
       if(x%2==0){
        y=x/2;
        cout<<y<<endl;
       }
       else{
        y=2*x;
        cout<<y<<endl;
       }
    }
    return 0;
}