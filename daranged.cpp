#include<bits/stdc++.h>
using namespace std;
int main(){
 long  long t;cin>>t;
 while(t--){
    long  long  n;cin>>n;
    vector<long  long>v(n);
    for(int i=0;  i<n; i++)cin>>v[i];
    int f=0,z;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            f=1;
            z=i;
            break;

        }
    }
    long long ans=0,ft=1;
    if(n==2){
        if(v[0]<=v[1]){
            ans+=(v[0]*2);
            
            
        }
        else{
            ans+=v[0];
            ans+=v[1];
            
        }

    }
    else{
        if(f && z>=3){
            long long mn=min(v[0],v[1]+v[2]);
            ans+=(v[0]+mn);

        }
        else{
            int mn=min(v[0],v[1]);
          ans+=(v[0]+mn);
        }
    }
   cout<<ans<<endl;

 }
return 0;
}