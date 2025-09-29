//https://codeforces.com/problemset/problem/1837/B
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
   int c=1,ans=1;
   for(int i=1;  i<n; i++){
    if(s[i-1]==s[i]){
        c++;
    }
    else c=1;

    ans=max(ans,c);
   }
   cout<<ans+1<<endl;
    
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