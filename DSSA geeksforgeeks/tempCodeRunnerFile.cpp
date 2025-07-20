#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int ar[n+1];
       for(int i=1; i<=n; i++)
       {
        cin>>ar[i];
       }
       sort(ar+1,ar+n+1);
       int m=(n+1)/2;
       int an=1;
       for(int i=n+1; i<=n; i++)
       {
        if(ar[i]==ar[i-1])
         an++;
         else
         break;
       }
       cout<<an<<endl;
    }
}