#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
   int n,s;
   cin>>n>>s;
   int ar[n];
   for(int i=0; i<n;  i++) cin>>ar[i];
   int f=ar[n-1]-1;

    if(s==1 || ar[n-1]==s){
      cout<<f<<endl;
    }
   
    else if(s<ar[n-1] && s!=1){
      int m= ar[n-1]/2;
      if(s<=m){
         int sum= s-1;
         cout<<sum+f<<endl;
      }
      else{
         int sum = ar[n-1]-s;
         cout<<sum+f<<endl;
      }
      
    }
     else{
      cout<<f+1<<endl;
    }
 
   
 }
return 0;
}