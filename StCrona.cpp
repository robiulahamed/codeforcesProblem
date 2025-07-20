#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n,x;
    cin>>n>>x;
    if(x>=n){
        for(int i=0; i<n; i++){
            cout<<i<<" ";

        }
        cout<<endl;

    }
    else{
        for(int i=0; i<n; i++){
            if(i==x) continue;
            else{
                cout<<i<<" ";
            }
        }
        cout<<x<<endl;
    }
 }
return 0;
}