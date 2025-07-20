#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,arry[200],count=0;
    cin>>n>>x;
    for(int i=0; i<x; i++)
    {
        cin>>arry[i];
    }
    cin>>y;
    for(int i=x; i<x+y; i++)
    {
        cin>>arry[i];
    }
    sort(arry,arry+(x+y));
    for(int i=0; i<x+y; i++)
    {
        if(arry[i]!=arry[i+1])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;

}
