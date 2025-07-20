#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,count1=0,count2=0;cin>>N;
    vector<int>v;
    for(int t=1; t<=4; t++)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if((i%2==0) && (ar[i]%2==0))
            {
                v.push_back(1);
            }
            else if((i%2!=0) && (ar[i]%2!=0))
            {
                v.push_back(1);
            }
            else{
                v.push_back(2);
            }
        }
    }
    cout<<v.find(2);
    cout<<v.find(1)<<endl;
   for(int i=0; i<n; i++)
   {
      if(v[i]==1)
      { 
        count1++;
      }
      else
      {
        count2++;
      }
   }

    

    
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        swap(s[0],s[4]);
        cout<<s<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=="A" || s[i]=="O" || s[i]=="Y" || s[i]=="E"|| s[i]=="U"||s[i]=="I"|| 
       s[i]=="a" || s[i]=="o" || s[i]=="y" || s[i]=="e"|| s[i]=="u"||s[i]=="i" ) 
       {
        
       }
    }
}

