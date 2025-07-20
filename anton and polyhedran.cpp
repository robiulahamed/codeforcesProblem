#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    string  a[n];
    for( i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(a[i]=="Cube")
        {
            count+=6;
        }
        else if(a[i]=="Octahedron")
        {
            count+=8;
        }
        else if(a[i]=="Dodecahedron")
        {
            count+=12;
        }
        else
        {
            count+=20;
        }

    }
    cout<<count;


}
