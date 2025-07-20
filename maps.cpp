#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 map<string ,string>mp;
 string nm,ip;
 for(int i=0;  i<n; i++){
    cin>>nm>>ip;
    mp[ip]=nm;
 }
 string cm;
 for(int i=0; i<k; i++){
    cin>>cm>>ip;
    string nip = ip;
    nip.pop_back();
    cout<<cm<<" "<<ip<<" "<<"#"<<mp[nip]<<endl;
 }
return 0;
}