#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,b=0,j=0;
    cin>>n;
    int a[n];
    for(int  i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {j++;}
        else
        {
            b++;
        }
    }
    if(j>b)
    {
         for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {cout<<i+1; break;}
    
    }
    }
    else
    {
        
         for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {cout<<i+1; break;}
    
    }
    }
   
}