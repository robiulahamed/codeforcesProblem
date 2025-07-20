#include<bits/stdc++.h>
using namespace std;
int main(){
  
  string s,s1;
  
 getline(cin,s);
 for(int i=0; i<s.length(); i++){
    s[i]=tolower(s[i]);
 }
 int c=0;
 for(int i=97; i<=122; i++  ){
      int j=0;
      int f=0;

    for(j=0; j<s.length(); j++){
        if(i==int(s[j])){
             f=1;
        }
        if(f==1){
            c++;
            f=0;
            break;
        }
    
    
    }
 }
 
 if(c==26){
    cout<<"pangram"<<endl;
 }
 else
 cout<<"not pangram"<<endl;

  


return 0;
}