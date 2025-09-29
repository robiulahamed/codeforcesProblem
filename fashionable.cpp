#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    string s;cin>>s;
     string s1="1011",sn="1101",sm="11011";
     int f=0,jm=0,cnt=0;
     if(s[0]=='1'){
        for(int i=1; i<n-2; i++){
            if(s[i]=='0')cnt++;
            if(s[i]==1 && s[i+1]=='1'){
                  jm=i;
                
            }
            if(jm!=0){
                if(cnt&1) f=1;
                else {
                    jm=0;
                    f=0;
                    cnt=0;
                }
            }
        }
        if(s[n-1]=='1' && f!=1){
            
        }
     }
    }
    return 0;
}