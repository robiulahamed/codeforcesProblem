#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while (t--)
 {
    string s;cin>>s;
    string s1="FFT",s2="NTT",s3="FFNTT";
    int i=0;
    while(i<s.size()){
           string sb = s.substr(i,3);
         string ssb =s.substr(i,5);

           
           if(sb==s1){
               s[i+1]=s[i+2];le
               s[i+2]=s[i];
               i+=3;
           }
           else if(sb==s2){
            s[i+1]=s[i];
            s[i]=s[i+2];
            
            i+=3;
           }
           else if(ssb==s3){
            s[i+1]=s[i+3];
            s[i+3]=s[i];
            i+=5;
           }
           else{
            i++;
           }
    }
    cout<<s<<endl;
    
 }
 
return 0;
}