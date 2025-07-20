#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    long long n,k;
    cin>>n>>k;
    long long ar[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    } 
    int f=1,s;
   
           sort(ar,ar+n);
           if(ar[n-1]==ar[n-2]){
               s=  ar[n-1]-ar[0];
                  }
           else {
            s=ar[n-1]-ar[0]-1;
           }
    

    if(s>k) cout<<"Jerry"<<endl;
    else{
        if(sum & 1) cout<<"Tom"<<endl;
    else cout<<"Jerry"<<endl;
        
    }
 }
return 0;
}