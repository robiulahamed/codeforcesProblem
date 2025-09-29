//https://codeforces.com/problemset/problem/1878/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
   
    long long ts=0;
    for(int i=1; i<=n; i++){
       
        ts+=i;
    }

     
        long long fn=0,ln=0;
       fn=(k*(2*n-k+1)/2);
       ln= k*(k+1)/2;
        
    
    if(k==1){
        if(x<=n){
            cout<<"yes\n";
        }
        else {
            cout<<"no\n";
        }
    }
    else if(k==n){
        if(x==ts){
            cout<<"yes\n";
        }
        else cout<<"no\n";
    }
    else{
       if(x>=ln && x<=fn){
        cout<<"yes\n";
       }
       else {
        cout<<"no\n";
       }
    }
    }
    return 0;
}