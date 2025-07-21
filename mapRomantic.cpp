#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;cin>>t;
while(t--){
    long long n;cin>>n;

    map<long long,bool>mp;
    long long sum=0;
    bool istrue = false;
    mp[sum]=true;
    

    for(long long i=0,x; i<n; i++){
        cin>>x;
        if(i%2==0) x*=-1;
        sum+=x;
      
        if(mp[sum]==true) {
            istrue =true;
           
        }
        mp[sum]=true;
    }
    if(istrue) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


return 0;
}