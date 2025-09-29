//https://codeforces.com/problemset/problem/1896/B
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
    string s;cin>>s;
    int c=0,f=0,ans=0,l=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='B' && f==0){
            c=i;
            f=1;
        }
        if(f==1 && s[i]=='A'){
            ans=1;
            l=i;
        }
    }
    if(ans) cout<<c-l<<endl;
    else cout<<ans<<endl;
    
    }
    return 0;
}