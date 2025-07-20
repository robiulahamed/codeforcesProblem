#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count1=0,count2=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count1++;
            count2=0;
            if(count1>=4)break;
        }
        else {
            count2++;
            count1=0;
            if(count2>=4)break;
        }
    }
    if(count1>=4  )
    {
        cout<<"Error free !"<<endl;
    }
    else if( count2>=4)
    {
        cout<<"Error free!";
    }
    else { cout<<"Error detected. !"<<endl;}

}
