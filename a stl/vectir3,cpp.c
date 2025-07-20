#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row=5;
    int colum[]={5,3,4,2,1};
    vector<vector<int>> v(row);

    for(int i=0; i<row; i++)
    {
        int col=colum[i];
        v[i]=vector<int>(col);
        for(int j=0; j<col; j++)
        {
            v[i][j]=j+1;
        }
    }

    for(int i=0; i< row ; i++)
    {
        for(int j=0; j< vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" " ;
        }
    }
}
