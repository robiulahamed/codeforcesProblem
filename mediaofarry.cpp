#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int m=(n-1)/2;
        int c=ar[m];
        int ans=1;
        for(int i=m+1; i<=n;i++)
        {
            if(c==ar[i])
            {
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
}


//remove smallest
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=0;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(ar[i+1]-ar[i] <= 1 ){
                count++;
            }
        }
        if(count== n-1)
          cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;  
    }
}
