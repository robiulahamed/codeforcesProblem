#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i,count1=0;
     cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
         sum=sum+arr[i];
         count1=count1+100;
     }
    float t=(float(sum)/count1)*100;
    cout<<t<<endl;

}
