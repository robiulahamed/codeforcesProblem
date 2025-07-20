#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,ans;
    cin>>n>>m;
    int arr[m];

    for( i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    ans=arr[n-1]-arr[0];
    for(i=1 ; i<m-n;i++)
    {
       int ans2=arr[i+n-1]-arr[i];
       ans=min(ans,ans2);
    }
    cout<<ans<<endl;

}
