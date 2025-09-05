#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n; string  s;
    cin>>n>>s;
    vector<int>v(26,0);
    for(int i=0; i<n;  i++){
        v[s[i]-'a']++;
    }
    int dstn = 0;
    for(auto i:v){
        if(i) dstn++;
    }
    if(dstn<=1){
        cout<<s<<endl;
        continue;
    }

    int maxc=-1,minc=INT_MAX;
    int maxl=0,minl=0;
    for(int i=0; i<26; i++){
        if(v[i]>0){
            if(v[i]>maxc){ maxc=v[i]; maxl=i;}
            if(v[i]<minc){ minc=v[i]; minl=i;}
        }
    }
    if(minl==maxl){
        for(int i=0; i<26; i++){
            if(i!=minl && v[i]==maxc) {
                maxl=i;
                break;
            }
        }
    }

    for(int i=0; i<n;  i++){
        if(s[i]-'a'==minl){
            s[i] = char('a'+maxl);
        }
    }
    cout<<s<<"\n";
    }
    return 0;
}