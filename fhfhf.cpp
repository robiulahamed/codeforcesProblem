#include<bits/stdc++.h>
using namespace std;
bool chec(int n){
    for(int i=2;  i<=n/i; i+=2){
        if(i%2==0) return false;
       
    }
     return true;
}
int main(){
 int t;cin>>t;
 while(t--){
    long long x;cin>>x;
    cin>>x;
    int k;cin>>k;
   if((chec(x) && k==1 && x!=1) || (x==1 && k==2)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

 }
return 0;
}