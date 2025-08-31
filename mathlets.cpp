//https://codeforces.com/problemset/problem/2060/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    vector<long long>f(k+1,0);
    for(int i=0; i<n;  i++){
        cin>>v[i];
        if(v[i]<=k)
            f[v[i]]++;
    }
    int c=0;
    for(long long  i=1; i<k; i++){
            if(i==k-i){
                c+=f[i]/2;
            }
            else if(i<k-i){
                c+=min(f[i],f[k-i]);
            }
    }
    cout<<c<<endl;
    }
    return 0;
}