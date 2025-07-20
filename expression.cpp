#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m=0;
    cin>>a>>b>>c;
    int sum1=a+(b*c);
    int sum2=a*(b+c);
    int sum3=a*b*c;
    int sum4=(a+b)*c;
    int sum5=a+b+c;
     int ans=max(sum5,max(sum4,max(sum3,(max(sum1,sum2)))));
     cout<<ans<<endl;
    return 0;


}
