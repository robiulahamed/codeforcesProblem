#include<bits/stdc++.h>
using namespace std;
int  inse(int ar[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(ar[i]==key)
            return i;

    }
    return -1;
}
int main()
{
    int ar[]={10,20,30,40,50,60};
    int n=sizeof(ar)/sizeof(ar[0]);
   int key=40;
   int result =inse(ar,n,key);
   if(result!=-1)
   {
       cout<<"the ket value at index is:"<<result<<endl;
   }
   else
    cout<<"element not found ";
}

