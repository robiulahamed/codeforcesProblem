#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0; i<a; i++)
        {
            cout<<i;
        }
        int s=65;
        for(int i=0; i<b; i++){
            s=s+i;
            if(s==90) {
                i=0;
            }
         cout<<static_cast<char>(s);
        }
        int m=97;
        for(int j=0; j<c; j++){
            m=m+j;
            if (m==121){
                j=0;
            }
            cout<<static_cast<char>(m);
        }
        cout<<endl;
        
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int  t;cin>>t;
   while (t--)
   {
    int k; cin>>k;
    if(k%2==0){
        cout<<"NO"<<endl;

    }
    else{
        cout<<"YES"<<endl;
    }
   }
   
}