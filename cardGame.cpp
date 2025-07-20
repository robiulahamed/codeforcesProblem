#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while (t--)
 {
    int n;cin>>n;
    string s;
    cin>>s;
    if(n<=2){
        if(s[0]=='A') cout<<"Alice"<<endl;
        else
        cout<<"Bob"<<endl;
        continue;
    }
    
        if(s[0]==s[n-1]){
            if(s[0]=='A') cout<<"Alice"<<endl;
            else 
            cout<<"Bob"<<endl;
        }
        
        else{
           if(s[n-1]=='B'){
            int f=0;
            for(int i=0; i<n-1; i++){
                  if(s[i]=='B') f=1;
            }
            if(f==1){
                cout<<"Bob"<<endl;
            }
            else 
            cout<<"Alice"<<endl;
           }
           else if(s[n-1]==s[n-2] && s[n-1]=='A'){
            cout<<"Alice"<<endl;
        }
        else 
        cout<<"Bob"<<endl;
        }

    
 }
 
return 0;
}
