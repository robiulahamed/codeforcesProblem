#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while (t--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    int s=abs(a-b);
     if(s%2==0){
      cout<<"YES"<<endl;
     }
     else
     cout<<"NO"<<endl;
  }
  

}
