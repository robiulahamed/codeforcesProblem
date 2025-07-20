#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,i,count1=0;
    for(i=0 ; i<n; i++)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            count1++;
        }
    }
    cout<<count1;
}
