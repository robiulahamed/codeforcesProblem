#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        long long n;cin>>n;
        int f=1;
        vector<long long>v;
        for(long long i=10; i<1000000000000000000; i=i*10){
            if(n%(i+1)==0){
                long long x = n/(i+1);
                v.push_back(x);
            }
            
        }
        sort(v.begin(),v.end());
        if(!v.empty()){
            cout<<v.size()<<endl;
            for(auto i:v){
                cout<<i<<" ";
            }

        }   
        else{
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}