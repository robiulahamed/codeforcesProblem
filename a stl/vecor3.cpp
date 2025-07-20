#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;
   cin>>n;
   int col[n];
   for(i=0; i<n; i++)
   {
       cin>>col[i];
   }
   vector<vector<int>>v(n);

   for(i=0; i<n; i++)

   {
       v[i]=vector<int>(col[i]);
    for(j=0; j<col[i]; j++)
    {
        v[i][j]=j+1;
    }
   }

for(i=0; i<n; i++)
{
    for(j=0; j<col[i]; j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}


}

