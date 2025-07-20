#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m=0,p=101,mex,men;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
            mex=i;
        }
        if(arr[i]<=p)
        {
            p=arr[i];
            men=i;
        }
    }
    if(mex>men)
    {
        men++;
    }
    cout<<mex+(n-1)-men<<endl;


}
