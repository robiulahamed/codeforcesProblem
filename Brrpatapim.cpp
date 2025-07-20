#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n; cin>>n;
    int val[n][n];
    for(int  i=1;  i<=n; i++){
        for(int  j=1; j<=n; j++){
            cin>>val[i][j];
        }
    }
   vector<int>v;
   vector<int>v2;
   v.push_back(0);
   
   int c=0;
    for(int  i=1;  i<=n; i++){
        for(int  j=1; j<=n; j++){
            
            for(int k=1; k<i+j;  k++){
            if(val[i][j]==v[k]){
                 c++;
            }
            if(c==0){
                v.push_back(val[i][j]);
                c==0;
            
           }
           
        }

        
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  }
  
return 0;
}