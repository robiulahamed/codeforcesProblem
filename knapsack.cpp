#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,w;cin>>n>>w;
 int tw[n],tp[n];
 for(int i=0; i<n;  i++){
    cin>>tw[i]>>tp[i];
 }
 double ans=0;
 while(w>0){
        
    int j=0;
    for(int i=0; i<n; i++){
        if(tw[i]==0)
        continue;
        
        double hav = (double)tp[j]/tw[j];
        double cav =(double) tp[i]/tw[i];
        if(cav>hav){
            j=i;
        }

    }
    if(tw[j]<=w){
        ans+=tp[j];
        w -=tw[j];
        tw[j]=0;
    }
    else{
        ans+= w* (double)(tp[j]/tw[j]);
        w=0;
    }

 }
 cout<<ans<<endl;
return 0;
}