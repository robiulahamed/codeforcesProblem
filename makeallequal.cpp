#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=0;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int N;cin>>N;
            mp[N]++;
            m=max(m,mp[N]);
        }
        cout<<n-m<<endl;
    }
}