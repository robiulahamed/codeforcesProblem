#include<iostream>
using namespace std;
int main()
{
    int k,w,n,i,a=0;
    cin>>k<<n>>w;
    for( i=1; i<=w;i++)
    {
        a+=i;
    }
    int d=(a*k-n);
    if(d<0)
    {
        cout<<"0"<<endl;
    }
    else{cout<<d<<endl;}
}
