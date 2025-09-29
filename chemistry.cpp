//https://codeforces.com/problemset/problem/1883/B
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
      string s;cin>>s;
      map<char,int>mp;
      for(auto i:s){
        mp[i]++;
      }
      int c=0;
      for(auto it:mp){
        if(it.second%2!=0) c++;
      }
      int ans = abs(c-k);
      if(ans==1){
        cout<<"YES"<<endl;
      }
      else if(c<=k)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}