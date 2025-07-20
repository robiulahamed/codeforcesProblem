#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    long long n; cin>>n;
    string s;cin>>s;
    int h=0,u=0;
    for(int i=0; i<n; i++){
        if(s[i]=='_') u++;
        else h++;
    }
    
    if(h>1 && u>=1){
        if(h%2!=0){
        long long a=h/2;
        cout<<a*(a+1)*u<<endl;
    }
    else{
        long long b=h/2;
        cout<<b*b*u<<endl;
    }
    }
    else{
        cout<<0<<endl;
    }
 }
return 0;
}