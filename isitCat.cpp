#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
   string s;cin>>s;
   for(int i=0; i<s.length();  i++){
      s[i]=tolower(s[i]);
   }
   int m=0,e=0,o=0,w=0,ind=0,f=0;
   if(s[ind]=='m'){
    while((s[ind]=='m') && ind<n){
        m=1;
        ind++;
    }

   }
   else{
    f=1;
   }
    if(s[ind]=='e'){
    while((s[ind]=='e') && ind<n){
        e=1;
        ind++;
    }

   }
   else{
    f=1;
   }

    if(s[ind]=='o'){
    while((s[ind]=='o') && ind<n){
        o=1;
        ind++;
    }

   }
   else{
    f=1;
   }
    if(s[ind]=='w'){
    while((s[ind]=='w') && ind<n){
        w=1;
        ind++;
    }

   }
   else{
    f=1;
   }

   if(m==1 && e==1 && o==1 && w==1 && ind==n && f==0){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

 }
return 0;
}