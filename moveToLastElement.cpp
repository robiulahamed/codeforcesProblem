#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    long long ar[n+10];
    for(long long i=1; i<=n; i++){
        cin>>ar[i];
    }
    long long ma[n+10],mx1=ar[1];
    ma[0]=mx1;
    for(long long i=1; i<n;  i++){
           mx1=max(mx1,ar[i]);
           ma[i]=mx1;
    }
    long long sum=0;
    
    for(long long i=n; i>=1; i--){
       long long  now =max(ar[i],ma[i-1]);
       cout<<now+sum<<" ";
       sum+=ar[i];
    }
    cout<<endl;
 }
 
 
return 0;
}