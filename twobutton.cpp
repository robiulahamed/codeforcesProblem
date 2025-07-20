#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
 int ans=0;
 if(a<b){
   while(b>a){
      if(b%2==0){
         b=b/2;
      ans++;
      }
      else 
      {
         b=b-1;
         ans++;
      }
      
   }
   int r = a-b;
   ans+=r;
    cout<<ans<<endl;
    

    
 }
 else{
   ans+=a-b;
   cout<<ans<<endl;
 }
 
return 0;
}



#include <iostream>
int n,m,a;
main()

{std::cin>>n>>m;
   while(n<m)
   m%2?m++:m/=2,a++;
    std::cout<<a+n-m;}