//https://codeforces.com/problemset/problem/1973/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int s=a+b+c;
    int rs;
    if(s&1){
        cout<<-1<<endl;
    }
    else{
       rs = min((a+b+c)/2,a+b);
       cout<<rs<<endl;
    }
    }
    return 0;
}