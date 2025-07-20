#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   int a,x,y;
   cin>>a>>x>>y;
   int mn =min(x,y);
   int mx =max(x,y);
   int s1=abs(a-mn);
   int s2=abs(a-mx);
   int f =0;
   bool ex =false;
   for(int i=mn; i<=mx && !ex; i++){
      if(i!=a){
         int b1=abs(i-x);
         int b2=abs(i-y);
         if(b1<s1 && b2<s2){
            cout<<"YES"<<endl;
            f=1;
            ex= true;
            break;
         }
      }
      
   }
   if(f==0)cout<<"NO"<<endl;
 }
return 0;
}