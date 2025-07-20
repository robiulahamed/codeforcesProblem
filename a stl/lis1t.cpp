
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int arr[]={2,4,5,0,9};
   int a=sizeof(arr)/ sizeof(arr[0]);
   cout<<a;
   list<int>l{arr,arr+a};for(auto t:l){cout<<t<<" ";}
}

