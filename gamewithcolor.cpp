//https://codeforces.com/problemset/problem/2042/B
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
           map<int,int>mp;
           for(int i=0,a; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
            
           }   
           int c=0;
           for(auto i:mp){
            if(i.second==1) c++;
           }
           int alise = 0;
           int mines = mp.size()-c;
           if(c&1){
               alise=c/2;
               alise++;
           }
           else {
            alise=c/2;
           }
           cout<<alise*2+mines<<endl;

    }
    return 0;
}