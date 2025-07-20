#include<bits/stdc++.h>
using namespace std;
int main(){
     int t; cin>>t;
     while(t--){
        string s;
        cin>>s;
        int ans=0,last;
        for(long long i=s.size()-1; i>=0;  i--){
            if(s[i]=='0')
                {
                    ans++;
                }
            
            else{
                last=i;
                break;
            }
        }
        for(long long i=0; i<last; i++){
            if(s[i]!='0'){
                ans++;
            }
        }
        cout<<ans<<"\n";
        }
        return 0;
     }
