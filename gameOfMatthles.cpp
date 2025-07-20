#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n; cin>>n;
    int ar[n];
    for(int i=0; i<n;  i++) cin>>ar[i];
    int z=0,one=0;
    for(int i=0; i<n; i++){
        if(ar[i]==0) z++;
        else one++;
    }
        if(z==one ||  (z==0 && one>1) ||(one==0 && z>1)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 }
return 0;
}