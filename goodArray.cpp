//https://codeforces.com/problemset/problem/1856/B
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;cin>>n;
  vector<int>v(n);
  int cz=0;
  long long tc=0;
  for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]==1) cz++;
    else tc+=v[i];
  }
  if(n==1) {
    cout<<"no\n";
    return;
  }
  long long f=v.size()-cz;
  tc-=f;
  if(tc>=cz) cout<<"yes\n";
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