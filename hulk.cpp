#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for( i=1 ; i<=n; i++)
    {   if(i==1)
        {
            cout<<"I hate ";
        }
         else if(i%2==0)
        {
            cout<<" that I love ";
        }
        else{
            cout<<"that I hate ";
        }
    }
    cout<<" it"<<endl;
    return 0;
}
