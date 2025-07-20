#include<bits/stdc++.h>
using namespace std;
int main(){
 int t; cin>>t;
 while(t--){
    long long n;cin>>n;
    string s;
    cin>>s;
    int mn = 0;
    for(int i=1; i<n; i++){
        if(s[i]<=s[mn]){
            mn=i;
        }
    }
    cout<<s[mn];
    for(int i=0; i<n;  i++){
        if(i== mn) continue;
        cout<<s[i];
    }
    cout<<endl;
 }
return 0;
}