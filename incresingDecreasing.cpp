//https://codeforces.com/problemset/problem/1864/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n,a,b;
    cin>>a>>b>>n;
    vector<int>v(n);
    
    v[n-1]=b;
    int m=1;
    for(int i=n-2; i>=0; i--){
        v[i]=v[i+1]-m;
        m++;
    }
    if(v[0]>=a){
           v[0]=a;
           for(auto i:v){
            cout<<i<<" ";
           }
           cout<<"\n";
           }
           else{
            cout<<-1<<"\n";
           }
    }

   
