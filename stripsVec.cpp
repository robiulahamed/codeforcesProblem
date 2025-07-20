#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   int n=8;
   char  ans='B';
   while(n--){
    int cnt=0;
    vector<char>v(8);
    for(int i=0; i<8;  i++){
        cin>>v[i];
        cnt+=(v[i]=='R');
    }
    if(cnt==8) ans='R';
   }
   cout<<ans<<endl;
 }
return 0;
}