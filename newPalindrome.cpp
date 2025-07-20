#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   string s;
   cin>>s;
   int f=0;
   int z =s.size();
   if(z%2 == 0 && z>2){
    for(int i=1; i<z/2; i++){
        if(s[i] != s[i-1]){
            f++;
            break;
        }
    }
   }
 if(z %2 != 0 && z>3){
     for(int i=1; i<z/2; i++){
        if(s[i] != s[i-1]){
            f++;
            break;
        }
    }
 }
 if(f) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;


   }
 
return 0;
}