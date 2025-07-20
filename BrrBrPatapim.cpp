#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
int n,k; string s;
cin>>n>>k>>s;
int f=0;
string r(s.rbegin(),s.rend());
if(r>s) f=1;
sort(s.begin(),s.end());
if(k && s[0]!=s[n-1]) f=1;
printf("%s\n", f? "YES":"NO");

 }
return 0;
}