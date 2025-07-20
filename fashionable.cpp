#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n ; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int min = v[0];
    int ma_x = v.back();
    int min_p=0,min_n=0,max_p=0,max_n=0;
    while(n>1){
        if( min %2 ==0){
         min_p++;
         v.erase(v.begin());
    }
    else {
        min_n++;
         v.erase(v.begin());
    }
     
    if(v.back()% 2==0) {
        max_p++;
         v.erase(v.end() - 1);
    }
    else {
        max_n++;
         v.erase(v.end() - 1);
    }

    }

    cout<<min_p<<" "<<min_n<<" "<<max_p<<" "<<max_n<<endl;
    if((v[0]%2==0 && v.back()%2 !=0)){
        if(min_p < max_n){
            cout<<min_p<<endl;
        }
        else{
            cout<<max_n<<endl;
        }
    }
    if32gfvfdc ((v[0]%2!=0 && v.back()%2 ==0)){
        if(min_n < max_p){
            cout<<min_n<<endl;
        }
        else{
            cout<<max_p<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }


 }
return 0;
}