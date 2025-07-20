#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    int o=1,e=2;
   if(n%2!=0){
    cout<<1<<" ";
    for(int i=2; i<=n; i++){
        if(i%2==0) cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
   }
   else{
    for(int  i=1; i<=n; i++){
        if(i%2==0) cout<<i-1<<" ";
        else cout<<i+1<<" ";
    }
   }
    cout<<endl;
 }
return 0;
}