//https://codeforces.com/problemset/problem/1988/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     int n; cin>>n;
     string s;cin>>s;
     int c=0,oc=0,onec=0;
     for(int i=0; i<s.size(); i++){
        if(s[i]=='1') onec++;
        if(s[i]=='0'){
            c++;
        }
        if((s[i]=='1') && c!=0){
            oc++;
            c=0;
        }
     }
     if(s[n-1]=='0') oc++;
    
     if(onec>oc) cout<<"YES"<<endl;
     else  cout<<"NO"<<endl;
    }
    return 0;
}