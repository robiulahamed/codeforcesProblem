#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    long long ar[n];
    long long br[n];
    long long s=0;
    for(int i=0; i<n;  i++){
        cin>>ar[i];
    }
    for(int  i=0; i<n; i++){
        cin>>br[i];
        s+=max(ar[i],br[i]);
        br[i]=min(ar[i],br[i]);
    }
    sort(br,br+n, greater<int>());
    for(int i=0; i<k-1; i++){
       
        s+=br[i];
    }
    s++;
    cout<<s<<endl;

   }
return 0;
}