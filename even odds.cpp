
#include<iostream>
using namespace std;
int main()
{
    long long int a,b,i;
    cin>>a>>b;
   if(a%2==0)
   {
       i=a/2;
   }
   else{
    i=(a/2)+1;
   }
   if(i>=b)
   {
       cout<<(2*b)-1<<endl;
   }
   else{
    cout<<(b-i)*2<<endl;
   }
}
