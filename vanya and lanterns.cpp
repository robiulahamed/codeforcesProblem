#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]-arr[i]>r)
        {
             r=arr[i+1]-arr[i];
        }
    }
    double x=arr[0];
    double y=(double)r/2;
    double z=max(x,y);
    double k=m-arr[n-1];
    z=max(k,z);
    cout<<fixed<<setprecision(10)<<z;

}
