#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    int ar[n];int c=0,c1=0,a=0;
    for(int i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i]==1) c++;
        else c1++;
    }
    for(int i=0; i<n ; i++){
        if(c==n && c1==n){
            cout<<"YES"<<endl;
            a=1;
            break;
        }
        if(ar[i]== 0 && ar[i+1]==0) {
            cout<<"YES"<<endl;
            a=1;
            break;
        }
        
      
        
    }
    if(a==0) cout<<"NO"<<endl;
    
    
 }
return 0;
}