#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	map<string, string>ntoc;
    string n1,c;
	for(int i=0; i<n; i++){
	    cin>>n>>c;
	    ntoc[n1]=c;
	    
	}
	map<string,int>cnfc,cnfn;
	int maxc1=0,maxc2=0;
	string maxs1="",maxs2="";
	
	
	for(int i=0; i<m;   i++){
	    cin>>n1;
	    cnfn[n1]++;
	    c = cnfn[n1];
	    cnfc[c]++;
	    if(maxc1<=cnfn[n1]){
	        maxc1 = cnfn[n1];
	        if(maxc1 == cnfn[n1]){
	            maxs1 =min(maxs1,n1);
	        }
	        else{
	            maxs1 = n1;
	        }
	    }
	    if(maxc2<=cnfn[c]){
	        maxc2 = cnfn[c];
	        if(maxc2 == cnfn[c]){
	            maxs2 =min(maxs2,c);
	        }
	        else{
	            maxs2 = c;
	        }
	    }
	    
	    
	}
	cout<<maxs2<<endl<<maxs1<<endl;

}
