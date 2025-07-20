#include<iostream>
using namespace std;
int main()
{
    int array[100][100], n,i,j,s1,s2,s3,sum1=0,sum2=0,sum3=0;
    cin>>n;
   for(i=0;i<n; i++)
   {
       for(j=1; j<=3; j++)
       {
           cin>>array[i][j];
       }
   }
   for(j=1; j<=3; j++)
   {
       for(i=0; i<n; i++)
       {
           s1=array[i][j];
           sum1=sum1+s1;
           s2=array[i][j+1];
           sum2=sum2+s2;
           s3=array[i][j+2];
           sum3=sum3+s3;
       }
   }
  if ( sum1==0 && sum2==0 && sum3==0)
   {
       cout<<"YES"<<endl;
   }
   else{cout<<"NO"<<endl;}


}
