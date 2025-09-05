//https://codeforces.com/problemset/problem/2035/B
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
    if(n==1 || n==3){
        cout<<-1<<"\n";
        continue;
    }
    string s="";
    if(n&1){
      
       n=n-5;
      for(int i=0; i<n; i++){
        s+="3";
      }
      s+="36366";
    }
    else{
         n=n-2;
        for(int i=0; i<n; i++){
           s+="3";
        }
        s+="66";

    }
    cout<<s<<endl;
    }
    return 0;
}