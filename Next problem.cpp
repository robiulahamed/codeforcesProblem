#include<iostream>
using namespace std;
int main()
{
    int n,k,array[50],i,count=0;
    cin>>n >>k;
    for(i=0;i<n; i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>=array[k-1]&& array[i]>0){count++;}
    }
    cout<<count<<endl;


}
