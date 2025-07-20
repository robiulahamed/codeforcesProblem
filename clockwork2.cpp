#include<bits/stdc++.h>
using namespace std;
int main(){
 int t ;cin>>t;
 while(t--){
    long long n;cin>>n;
    vector<long long > v(n);
    for(long  long i=0; i<n;i++) cin>>v[i];

    int  f=1;
    for(long long i=0; i<n; i++){
        if(v[i]<=2*(max(i,(n-i-1)))){
            f=0;
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
return 0;
}