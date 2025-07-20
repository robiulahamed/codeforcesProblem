#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
     string s; char s2[n];
     cin>>s;

    for(int i=0; i<n;  i++){
        s2[i]=s[i];
    }
    int ans=0;
    bool f=0;
  
    reverse(s.begin(),s.end());
    
        if(k==0){
            if( int(s[0]) < int(s2[0]) ){
           
                  ans=0;
                  
            }
            else {
               ans=1; 
            }
        }
        else{
            if( int(s[0]) <= int(s2[0]) ){
                for(int k=0;  k<n; k++){
                    if( int(s2[0]) < int(s[k]) ) f=1;
                }
                if(f) ans=1;
                else ans =0;
                
            }

            else{
                ans=1;
            }

        }

        if(ans==0)
                    { cout<<"NO"<<endl; }
                else {
                    cout<<"YES"<<endl; 
                }
        
    

     
  
     

  }
return 0;
}