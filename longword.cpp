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
        if(sz>10)
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
