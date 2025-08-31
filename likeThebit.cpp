#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    
    vector<int>ar(n,0);
    string s;cin>>s;
    bool sat = false;
    int c=0;
    for(int i=0; i<n;  i++){
        if(s[i]=='1'){
            c++;
        }
        else{
            c=0;
        }
        if(c>=k){
        
            sat=true;
        }
    }
    if(sat){
        cout<<"NO"<<endl;
        continue;
    }
    int a=n,b=1;
    
    for(int i=0; i<n; i++){
             if(s[i]=='0'){
                ar[i]=a;
                a--;

                
                
             } 
             else{
                ar[i]=b;
                b++;
             }
             
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n;  i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    

    }
    
}