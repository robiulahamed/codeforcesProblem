#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[n],c=0; long long sum=0;
        for(int i=0; i<n;   i++){
            cin>>ar[i];
            if(ar[i]==0)c++;
            sum+=ar[i];

        }
        sum+=c;
        
   
        cout<<sum<<endl;
        

    }
 
return 0;
}