#include<bits/stdc++.h>
using namespace std;
int main(){
 string s1;
 getline(cin,s1);
 string s2;
 getline(cin,s2);
 string s3;
 getline(cin,s3);
 int a=0,b=0,c=0;
 for(auto s:s1){
    if(s=='a' || s=='i' || s=='e' || s=='o' || s=='u')a++;
 }
 for(auto s:s2){
    if(s=='a' || s=='i' || s=='e' || s=='o' || s=='u')b++;
 }
 for(auto s:s3){
    if(s=='a' || s=='i' || s=='e' || s=='o' || s=='u')c++;
 }
if(a==5 && b==7 && c==5) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}