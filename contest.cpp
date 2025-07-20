#include<bits/stdc++.h>
using namespace std;
int main(){
 long long t;cin>>t;
 while (t--)
 {

    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    long long ans=0;
    long long ab= b-a;
    
   if(a<b){
        if(x<=y){
            long long fr =abs(a-b);
            ans+=fr*x;

        }
        else{
            if(a%2!=0){
                long long ft,f=abs(a-b);
               if(f%2==0){
                long long s1=f/2;
                ans+=(x+y)*s1;
               }
               else{
                long long s1=f/2;
                ans+=((x+y)*s1+x);
               }

               
            }
            else{
                long long ft,f=abs(a-b);
               if(f%2==0){
                long long s1=f/2;
                ans+=(x+y)*s1;
               }
               else{
                long long s1=f/2;
                ans+=((x+y)*s1+y);
               }
        }

   }
}
   else if(a>b){
    long long ab=a-b;
    if((ab!=1) || a%2==0){
        ans =-1;
    }
    else{
           ans+=y;
    }

   }
   cout<<ans<<endl;
 }
 
return 0;
}