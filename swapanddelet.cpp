#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while (t--)
 {
    string s;
    cin>>s;
    int onec=0,zc=0;
    for(char c:s){
         onec+=(c=='1');
         zc+=(c=='0');
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            if(onec>0) onec--;
            else{
                break;
            }
        }
        else{
            if(zc>0) zc--;
            else{
                break;
            }
        }
    }
    cout<<max(onec,zc)<<endl;

 }
 
return 0;
}