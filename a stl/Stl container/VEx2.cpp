#include<bits/stdc++.h>
using namespace std;
int  vect(vector<int>v)
{
    vector<int>temp;
    for(int i=1; i<v.size()-1; i++)
    {
        if((v[i]<v[i+1])&& (v[i]<v[i-1]))
        temp.push_back(v[i]);
    }
    return temp;
}


int main(){
    vector<int>v;
 
    cout<<"the size of vector=";
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);

   }
   cout<<"Vector elements that are smaller than its adjacent neighbours:"<<endl;
   vector<int>result= vect(v);
   for(int i:result)
   {
    cout<<v[i]<<endl;
   }

}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, m; cin >> n >> m;
	map<char, bool> clrs =  {{'C', true}, {'M', true}, {'Y',true}};
 
	bool colored = false;
	for(int i = 1; i<=n * m; ++i) {
		char cc; cin >> cc;
		if(clrs[cc]) {
			colored = true;
			break;
		}
	}
 
	cout << (colored ? "#Color" : "#Black&White");
}








#include<bits/stdc++.h>
using namespace std;
int mina(){
    vector<int>v(10);
    vector<int>:: iterator it;
    for(it=it.begin(); it!=it.end(); it++)
    cout<<*it<<" ";
}