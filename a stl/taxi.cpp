#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,s=0;cin>>n;
   for(int i=1; i<=n;  i++)
   {
    cin>>a;
    s=s+a;
   }
   float b=float(s)/4;
   
    cout<<ceil(b);
}






#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int s,n;
    cin>>n;
     int ar[n]={0};
    while(n--)
    {
       
    for(int i=0; i<n; i++)
    {
        cin>>s;
        ar[s]++;
    }
    int sum=ar[4]+ar[3]+[2];
    cout<<sum;
    }
     
}