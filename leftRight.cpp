#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while (t--)
 {
    long long a,b,k;
    long  long cnt=0;
    cin>>a>>b>>k;
    long long ans=0;
    if(a<=k && b<=k){
        ans=1;
    }
    else{
        int mn = min(a,b);
        int mx=max(a,b);
        
        for(int i=2; i<=k; i++){
            
            if(a%i==0 && b%i==0 && (mx/i<=k)){
                ans=1;
                 
            }
        }
        if(ans!=1){
            int mx=max(a,b);
            for(int i=1; i<mx; i++){
                    if(i*k<mx) cnt++;
                    else{
                        cnt++;
                        break;
                    }
            }
            ans=cnt;
          

        }
    }
    cout<<ans<<endl;

    
 }
 
return 0;
}