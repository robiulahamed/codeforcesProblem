//https://codeforces.com/problemset/problem/2144/B
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
     set<int>s;
     for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]) s.insert(v[i]);
     }
      long long num =1;
      for(int i=n-1 ; i>=0; i--){
        if(v[i]==0){
            while(s.size()>0 && s.find(num)!=s.end()){
                num++;
            }
            v[i]=num++;
        }
      }
      int l=INT_MAX,r=INT_MIN;
      for(int i=0; i<n; i++){
        if(v[i]!=i+1){
            l=min(l,i);
            r=max(r,i);
        }
      }
      if(l!=INT_MAX && r!=INT_MIN){
        cout<<r-l+1<<endl;
      }
      else cout<<0<<endl;

    }
    return 0;
}