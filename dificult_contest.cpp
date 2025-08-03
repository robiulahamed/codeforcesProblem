#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    string s="";
    string s1;
    cin>>s1;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='T'){
            s+=s1[i];

        }
    }
    cout<<s;
    for(int i=0; i<s1.size(); i++){
       if(s1[i]!='T') cout<<s1[i];
    }
    cout<<endl;

 }
return 0;
}