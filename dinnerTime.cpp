#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
     int s =0;
     int ar[n];
     for(int i=1; i<=n; i++){
        if(i%p == 0) ar[i]=q;
        else ar[i]=0;
        s+=ar[i];
     }
     if(s==m ||  ar[n]==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
return 0;
}