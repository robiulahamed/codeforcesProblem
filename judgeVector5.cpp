#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
  
int n; cin>>n;
vector<int>a[n];
int q;cin>>q;
while(q--){
    int t;cin>>t;
    if(t==0){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
    }
    else if(t==1){
        int x; cin>>x;
        for(auto c: a[x]){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    else{
        int x;
        cin>>x;
        a[x].clear();
    }
}
 

return 0;
}#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
  
int n; cin>>n;
vector<int>a[n];
int q;cin>>q;
while(q--){
    int t;cin>>t;
    if(t==0){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
    }
    else if(t==1){
        int x; cin>>x;
        for(auto c: a[x]){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    else{
        int x;
        cin>>x;
        a[x].clear();
    }
}
 

return 0;
}