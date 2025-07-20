#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;cin>>n;
    int sum=0;
    for(int i=0 ; i<n ; i++){
        int N;cin>>N;int arr[N],arr1[N];
        for(int j=0; j<N ; j++){
            cin>>arr[i];
        }
       for(int j=0; j<N ; j++){
            cin>>arr[i];
        }
        for(int k=0; k<N; k++){
            if(arr[i]>arr1[i])
            {
                sum=arr[i]-arr1[i];
                sum=sum+0;
            }
            else{
                sum=arr1[i]-arr[i];
                sum=sum+0;
            }

        }
        cout<<sum;

    }

}
