
// peak elements  
#include<bits/stdc++.h>
using namespace std;

int reve(int arr[],int n)
{
    vector<int>v;
    if(n==0){
        v.push_back(arr[0]);
    }
    if(arr[0]>arr[1]){
        v.push_back(arr[0]);
    }
    if(arr[n-1]>arr[n-2])
    v.push_back(arr[n-1]);
    for(int i=1;i<n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            v.push_back(arr[i]);
        }
    }
    return v;


}

int main()
{
    int n;cin>>n;
    int arr[n];
    cout<<"enteer input  ";
     for(int i=0; i<n; i++)
     {
        cin>>arr[i];
     }
     int sz=sizeof(arr)/sizeof(arr[0]);
      cout<< reve(arr,sz);
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rv=0,int rm;
    cin>>n;
    while(n%10!=0)
    {
        rm=n%10;
        rv=rv*10+rm;
        n=n/10;
    }
    cout<<rv
}