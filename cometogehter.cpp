// //https://codeforces.com/problemset/problem/1845/B



#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int>a(3),b(3);
    int x=-1,y=-1;
    for(int i=0;i<3; i++){
        cin>>a[i]>>b[i];
        if(x==-1){
            x=a[i];
            y=b[i];
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout<<abs(a[1]-x)+abs(b[1]-y)+1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    
    }
    return 0;
}