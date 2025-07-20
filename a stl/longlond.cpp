#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        if(s>10)
        {
            cout<<s[0];
            cout<<sz-2;
            cout<<s[sz-1];
            cout<<endl;

        }
        else
        cout<<s<<endl;


    }
}


#include <iostream>
using namespace std;int main(){string s;cin>>s;while(cin>>s){int l=s.size();if(l>10){cout<<s[0]<<l-2<<s[l-1]<<endl;}else{cout<<s<<endl;}}