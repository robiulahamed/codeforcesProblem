#include<iostream>
using namespace std;
int main()
{
    int array[100][100] ,n,sum1=0,sum2=0,sum3=0,i,j;
    cin>>n;
   for(i=0;i<n; i++)
   {
       for(j=1; j<=3; j++)
       {
           cin>>array[i][j];
       }
       sum1+=array[i][1];
       sum2+=array[i][2];
       sum3+=array[i][3];

   }
    if ( sum1==0 && sum2==0 && sum3==0)
   {
       cout<<"YES"<<endl;
   }
   else{cout<<"NO"<<endl;}
}
