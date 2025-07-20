#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;while(t--){
       long long n; cin>>n;
       long long ar[n+10];
       int v ;
       for(int i=1;  i<=n; i++){
        cin>>ar[i];
        ar[i] = abs(ar[i]);
        if(i==1){
          v =ar[i];
        }

       }

       sort(ar+1, ar+n+1);
       int  f=0;
       for(int i=1; i<=(n+1)/2;  i++){
        if(ar[i]== v){
          f=1;
          break;

        }

       }

       if(f==1 || (n%2==0 && ar[n/2+1]==v)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
 }
return 0;
}