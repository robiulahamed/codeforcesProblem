#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    long long a,b;
    cin>>a>>b;
    string s;
    cin>>s;

    long long r=0,l=0,u=0,d=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='R') r++;
        else  if(s[i]=='L') l++;
        else  if(s[i]=='D') d++;
        else u++;
    }
    if(a> 0 && b>0){
        if(r>=a && u>=b) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a> 0 &&  b<0){
        if(r>=a && d>=abs(b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(a< 0 && b<0){
        if(l>=abs(a) && d>=abs(b)) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a<0 && b>0){
        if(l>=abs(a) && u>=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
return 0;
}