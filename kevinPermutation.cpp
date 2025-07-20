#include<bits/stdc++.h>
using namespace std;
int main(){
 long long t;cin>>t;
 while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    long long a=1;
    for(long long i=k-1; i<n; i+=k){
       v[i]=a;
       a++;
        
    }
    for(long long i=0; i<n; i++){
        if((i+1)%k !=0){
            v[i]=a;
            a++;
        }
    }
   for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
   }
    cout<<endl;
 

 }
return 0;
}