#include<bits/stdc++.h> //https://codeforces.com/contest/2127/problem/A
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n; cin>>n;
    int tmp=-1;
    bool same  =true;
    for(int i=0; i<n;  i++){
        int val; cin>>val;
        if(val!=-1){
            if(tmp==-1){
                tmp=val;
            }
            else if(val!=tmp) {
                same = false;
            }
        }
    }
    if(same && tmp!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    
 }
return 0;
} 