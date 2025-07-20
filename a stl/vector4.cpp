#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
   vector<vector<int>>v(5,vector<int>(4));

   for( i=0; i<5; i++)
   {
       for(j=0; j<4; j++)
       {
           v[i][j]=i+j+1;
       }
   }
    for( i=0; i<5; i++)
   {
       for( j=0; j<4; j++)
       {
          cout<< v[i][j]<<" ";
       }
       cout<<endl;
   }

}
