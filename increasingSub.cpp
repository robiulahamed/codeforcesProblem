#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    long  long ar[n];
    for(int i=0; i<n;  i++) cin>>ar[i];
    long long a=1;
    for(int i=0; i<n; i++){
       if(i==0){
        if(ar[i]==a) a++;
        continue;
       }
       a++;
       if(ar[i]==a) {
        a++;
       }
            
        }
         cout<<a<<endl;
    
   
 }
return 0;
}