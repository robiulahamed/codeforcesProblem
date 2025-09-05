//https://codeforces.com/problemset/problem/2031/B
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
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    string ans ="YES";
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            int a = v[i]-v[i+1];
            if(a==1) swap(v[i],v[i+1]);
            else{
                ans="NO";
            }
        }
        else{
            continue;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}