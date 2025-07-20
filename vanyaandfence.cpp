#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,h,b,count=0;
   cin>>a>>h;
   for(int i=1; i<=a; i++)
    {
    	cin>>b;
    	if(b<=h)
    		count++;
    	else if(b>h)
    		count=count+2;
    }
    cout<<count<<endl;
  return 0;
}