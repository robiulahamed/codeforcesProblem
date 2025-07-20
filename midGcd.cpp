#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long ar[n];
        for(long long  i=0; i<n; i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        long long g=0;
        for(long long i=1; i<n ; i++){
            if(ar[i]%ar[0]==0) g=__gcd(ar[i],g);
        }
        if(g==ar[0]) cout<<"YES\n";
        else
        cout<<"NO\n";
       
    }
    return 0;
}