#include <iostream>
using namespace std;int main(){string s;cin>>s;while(cin>>s){int l=s.size();if(l>10){cout<<s[0]<<l-2<<s[l-1]<<endl;}else{cout<<s<<endl;}}