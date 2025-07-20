#include<bits/stdc++.h>
using namespace std;
int main(){
 map<int,int>mp;
 vector<int>v;
 int n;
 while(cin>>n){
    mp[n]++;
    v.push_back(n);
 }
 for(auto i:v){
    if(mp[i]==0) continue;
    
    cout<<i<<" "<<mp[i]<<endl;
    mp[i]=0;
   
 }
return 0;
}






#include <bits/stdc++.h>
using namespace std;


int main () {
	int n;
	map < int, int > cnt;
	vector < int > nums;
	while (cin >> n) {
		cnt[n]++;
		nums.push_back(n);
	}
	for (int x : nums) {
		if (cnt[x] == 0) continue;
		cout << x << " " << cnt[x] << endl;
		cnt[x] = 0;
	}
	return 0;
}



