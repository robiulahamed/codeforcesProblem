//https://codeforces.com/problemset/problem/1990/A
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
    vector<int>v(n+1,0);
    for(int i=0,a; i<n;i++){
      cin>>a; v[a]++;
    }
    int f=0;
    for(int i=1; i<=n; i++){
      if(v[i]%2 != 0){
         f=1;
      }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}