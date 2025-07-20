#include<iostream>
using namespace std ;
int main()
{
    int n,count=1,i;
    cin>>n;
    int arr[n];
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for( i=0; i<n-1; i++)
    {
        if( arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
