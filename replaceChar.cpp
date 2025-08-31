//https://codeforces.com/problemset/problem/2047/B
#include<bits/stdc++.h>
#define long long int
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
      int n;cin>>n;
      string s;
      cin>>s;
      for(int i=1; i<n;  i++){
        if(s[i] !=s[i-1]){
            s[i]=s[i-1];
            break;
        }
      } 
      cout<<s<<endl;
    }
    return 0;
}