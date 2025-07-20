#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   int n,k;
   cin>>n>>k;
   string ar;
   cin>>ar;
   int zero=0,one=0;

   for(int i=0; i<n; i++){
      
      if(ar[i]=='1') one++;
      else zero++;
   }
   int ans = abs(one-zero)/2;
   if(k%2==0){
      if(ans%2==0 && k>=ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   else{
      if(ans%2!=0 && k>=ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }

 }
return 0;
}