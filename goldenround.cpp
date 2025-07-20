#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   int n,j,k;
   cin>>n>>j>>k;
   vector<int>v(n);
   for(int i=0; i<n; i++) cin>>v[i];
   int pk =v[j-1];
   int p=0;
   sort(v.begin(),v.end());
   for(int i=0; i<n; i++){
      if(pk==v[i]) p++;
   }
   int h =v[n-1],cnt=0;

   for(int i=0; i<n-1; i++){
         if(h>=v[i]){
            if(v[i]==pk)continue;
            else{
               cnt++;
            }
         }
         
         
         
   }
   cnt+=p-1;
   
   if(cnt>=(n-k)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 }
return 0;
}