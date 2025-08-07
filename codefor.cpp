#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n ; i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    for(int i=0; i<n-1; i++){
        if((v[i]==v[i+1] || v[i]==-1 || v[i+1]==-1) &&   v[i]!=0){
            cnt++;
            
        }
    }
    if((v[n-1]==v[n-2] || v[n-1==-1]) && v[n-1]!=0) cnt++;
    if(cnt==v.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
return 0;
}