#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    int  ans=0;
    for(long long i =1; i<=n; i++){
         
            for(long long j=i+1; j<=n; j++){
                long long c = sqrt(i*i+j*j);
                
                if(c<=n && c*c== i*i+j*j) ans++;
            }

    }
    cout<<ans<<endl;
return 0;
}