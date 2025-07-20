#include<bits/stdc++.h>
using namespace std;
class testNode{
    public:
     int val;
     testNode* nextAdress;
}
int main(){
    testNode firstG,secndG,thirdG;
    firstG.val=10;
    secndG.val=50;
    thirdG.val=100;
    firstG.next=&thirdG;
    secndG.next=&firstG;
    thirdG.next=NULL;
    cout<<secndG.next->val<<endl;

    

   
   
}

