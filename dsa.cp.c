#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={8,5,6,4,2};
    int n=sizeof(ar)/sizeof(ar[0]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {

            if(ar[j]>ar[j+1])
            {

                swap(ar[j],ar[j+1]);
            }
        }
    }
    for(int i=0; i<n;  i++)
    {
        cout<<ar[i]<<" ";
    }
}
