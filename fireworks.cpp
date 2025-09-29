//https://codeforces.com/problemset/problem/1945/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     long long a,b,m;
     cin>>a>>b>>m;
     long long f=m/a;
     f++;
     long long f2=m/b;
     f2++;
     cout<<f+f2<<endl;

    }
    return 0;
}