#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int s=0,n;cin>>n;
        string ss;
        cin>>ss;
       for(int i=0; i<n; i++){
        if(ss[i]=='1') { 
            s++;
        }
       }
    
       int ans=0;
       for(int i=0; i<n; i++){
        if(ss[i]=='1'){
            ans+=(s-1);
            
        }
        else{
            ans+=(s+1);
        }
       }
     cout<<ans<<endl;
    }
    return 0;
}