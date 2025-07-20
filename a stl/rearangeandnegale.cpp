#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int b=0;
    while(n--)
    {
        int a;cin>>a;
        for(int i=0; i<a; i++)
        {
            int ar[a];
            cin>>ar[i];
            if(ar[i]<0)
            {
                ar[i]=-ar[i];
            }
            b+=ar[i];
           
        }
        cout<<b;
    }
}