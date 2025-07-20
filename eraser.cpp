#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='B'){
            c++;
            i+=(k-1);
        }
    }
    cout<<c<<endl;
   
 }
return 0;
}