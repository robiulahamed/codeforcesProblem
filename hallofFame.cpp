#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;int f=0;
    string s;cin>>s;
    if(count(s.begin(),s.end(),'R')==n || count(s.begin(),s.end(),'L')==n ) {
        cout<<-1<<endl;
        f=1;
    }
    int ans =0;
    for(int  i=0; i<n; i++){
        if(s[i]=='L' && s[i+1]=='R' && i+1<n){
            ans =i+1;
            break;
        }
    }
    if(f==0)cout<<ans<<endl;
    
  }
return 0;
}