#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n ; i++){
        cin>>a;
        v.push_back(a);
    }
    int s=0,d=0;
    int nn=n;
    
        for(int i=1; i<=nn; i++){
                 if(i%2==0){
                   if(v.front()> v.back()){
                    s+=v.front();
                    v.erase(v.begin());
                       
                   }
                   else{
                     s+=v.back();
                     v.erase(v.end());
                   }
                 }
                 else{
                    if(v.front()> v.back()){
                        d+=v.front();
                        v.erase(v.begin());
                           
                       }
                       else{
                         d+=v.back();
                         v.erase(v.end());
                       }
                 }
        }
        cout<<s<<" "<<d<<endl;
        return 0;
    
  
}