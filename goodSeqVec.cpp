#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    int ans=0;
    vector<int>v(n+1);
    for(int   i=0; i<n;  i++){
        int x;
        cin>>x;
        if(x>n){
            ans++;
        }
        else{
            v[x]++;
        }
    }
    for(int i=1;  i<=n; i++){
        if(v[i]>=i) ans+=v[i]-i;
        else ans+=v[i];
    }
    cout<<ans<<endl;
 
return 0;
}