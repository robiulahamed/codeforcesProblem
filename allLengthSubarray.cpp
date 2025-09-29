#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    int ind = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[ind]<v[i]){
            ind=i;
        }
    }
    int l=ind,r=ind;
    bool f;
    int maxv=n-1;
    while(maxv>0){
        f=false;
        if(l-1>=0 && v[l-1]==maxv){
            l--;
            f=true;
        }
        else if(r+1<n && v[r+1]==maxv){
            f=true;
            r++;
        }
        if(f==false){
            cout<<"NO"<<"\n";
            return;
        }
        maxv--;
    }
    cout<<"YES\n";
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