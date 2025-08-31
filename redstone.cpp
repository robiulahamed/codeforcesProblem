//https://codeforces.com/contest/2133/problem/A
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
      vector<int>v(n);
      map<int,int>mp;
      for(int i=0; i<n;  i++){
        cin>>v[i];
        mp[v[i]]++;
      }
      int f=1;
      for(auto i: mp){
   
        if(i.second>=2){
           cout<<"YES"<<endl;
           f=0;
           break;
        }
      }
      if(f) cout<<"NO"<<endl;

    }
    return 0;
}