#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i,j;
    cin>>n;
     int a1[n];
     int a2[n];

     for( i=0; i<n; i++)
     {
         cin>>a1[i];
         cin>>a2[i];

     }
     for( i=0; i<n; i++);
     {
         for(j=0; j<n; j++)
         {
             if(a1[i]==a2[j])
             {
                 count++;
             }
         }
     }
     cout<<count;
     
}
