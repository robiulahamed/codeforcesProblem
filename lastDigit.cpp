#include<bits/stdc++.h>
using namespace std;
int main(){
 int val;cin>>val;
int temp = val/10;
temp = temp *10;
int lastd = val -  temp;
cout<<lastd;
val = val/10;
temp = val /10;
temp = temp *10;
int scnd = val - temp;
cout<<scnd;

return 0;
}