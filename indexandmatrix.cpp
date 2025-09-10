//https://codeforces.com/problemset/problem/2007/B
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
      vector<int>v(n);
      int mx =-1;
      for(int i=0;  i<n; i++){
        cin>>v[i];
        if(mx<=v[i]) mx = v[i];
      }
      int a,b;
      char c;
      vector<int>vv;
      for(int i=0; i<k; i++){
        cin>>c>>a>>b;
        if(c=='+'){
            if(mx>=a && mx<=b) {
                mx++;
              
            }
        }
        if(c=='-'){
            if(mx>=a && mx<=b){
                mx--;
                
            }
        }
        vv.push_back(mx);
      }
      for(auto i:vv){
        cout<<i<<" ";
      }
      cout<<"\n";
    }
    return 0;
}