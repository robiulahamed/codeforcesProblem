#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int i=0; i<n; i++)cin>>v[i];
  int cnt =0;
  for(int i=0; i<v.size(); i=i+k){
     int c=0;
    for(int j=i; j<k; j++){
      if(v[j]==0)c++;
    }
    if(c==k) cnt++;
    if(i+k>v.size()) break;
 }
 cout<<cnt<<endl;
}
return 0;
}