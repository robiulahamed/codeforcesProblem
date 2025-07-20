#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int a,b;
   
    cin>>a>>b;
   string s ="";
   char c='a';
   for(int i=0; i<b; i++){
    s+=c;
    c++;
   }
   string ans;
   for(int i=0; i<a; i++){
    ans+=s;
    
   }
    cout<<ans<<endl;
 }
return 0;
}