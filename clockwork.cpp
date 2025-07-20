#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    map<int,int>mp;
   if(n%2!=0){

           for(int i=1; i<=n/2+1; i++){
            mp[v[i-1]] +=((n-i)*2);
           }
           for(int i=n/2+2; i<=n ;  i++){
            mp[v[i-1]]+=((i-1)*2);
           }

   }
   else{

        for(int i=1; i<=n/2; i++){
            mp[v[i-1]]+=((n-i)*2);
        }
        for(int i=n/2+1; i<=n; i++){
            mp[v[i-1]] +=((i-1)*2);
        }


   }
   for(auto x:mp){
    cout<<x.first<<"  "<<x.second<<endl;
   }
  int f=1;
   for(auto x:mp){
      if(x.first<= x.second) {
        f=0;
        break;
      }
     
   }
   if(f) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 }
return 0;
}