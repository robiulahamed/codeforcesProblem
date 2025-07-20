#include<bits/stdc++.h>
using namespace std;
int main(){
 long  long n;
 cin>>n;
 vector<long long>v;
 v.push_back(0);
 v.push_back(1);
 for(long  long i=2; i<1000;  i++){
    long long ff=v[i-1]+v[i-2];
    
    v.push_back(ff);
    if(ff==n) break;
 }
 int f=0;
 if(n==1) {cout<<0<<" "<<0<<" "<<1<<endl;
     f=1;}
 else if(n==2){cout<<0<<" "<<1<<" "<<1<<endl;f=1;}
 else if(n==3) {cout<<0<<" "<<1<<" "<<2<<endl;f=1;}
 else  if(n==0) {cout<<0<<" "<<0<<" "<<0<<endl;f=1;}
 else{
    for(int i=4; i<v.size();   i++){
        if(v[i]==n){
            cout<<v[i-1]<<" "<<v[i-3]<<" "<<v[i-4]<<endl;
            f=1;
            break;
        }
    }
 }

 if(f==0)cout<<"I'm too stupid to solve this problem"<<endl;
return 0;
}