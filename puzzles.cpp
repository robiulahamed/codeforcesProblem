#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,ans;
    cin>>n>>m;
    int arr[m];

    for( i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int count=0,count2=0;
     for(i=0; i<m; i++)
    {
        if(arr[i]=arr[i+1])
        {
            count++;


        }
        else
        {
            count2++;
            count=0;
        }
    }
   // if (n==2 && count==1)
  //  {
        //cout<<"0";
        //return 0;
    //}
    int t=arr[m-1]-arr[0];
    if(count==n )
    {
        cout<<"0";
        return 0;
    }

    else
    {
        for(i=0; i<m; i++)
        {
             if(arr[n-1]-arr[i]==1)
                  {
                      cout<<"0";
                      return 0;
                  }
                  else
                  {

                      ans=arr[n-1]-arr[i];
                       ans=abs(ans);
                      t=min(ans,t);


                  }


        }
    }

    cout<<t<<endl;


}
