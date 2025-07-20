#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        arr2[arr[i]]=i;
    }
    for(i=1; i<=n;i++)
    {
        cout<<arr2[i]<<" "<<endl;
    }
    return 0;
}
