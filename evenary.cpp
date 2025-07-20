#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n],move=0,c=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int s=sizeof(ar)/sizeof(ar[0]);
        if(s==1)
        {
            if(ar[0]%2==0)
            cout<<0<<endl;
            else
            cout<<-1<<endl;
        }
        else if(n%2==0)
        {
            for(int i=0; i<n; i+=2)
            {
                int j=i+1;
                if((ar[i]%2!=0)&& (ar[j]%2==0))
                {
                    move++;
                }
                j+=2;
            }
            cout<<move<<endl;
        }
        else
        {
          for(int i=0; i<n-1; i+=2)
          {
            int j=i+1;
                if((ar[i]%2!=0)&& (ar[j]%2==0))
                {
                    c++;
                }
                j+=2;
          }
          cout<<c<<endl;
        }
        
        
       
    }
    }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i=0,o=0,e=0; cin>>n;
        while(n--)
        {
            int a; cin>>a;
            if((i%2==0) && (a%2!=0))e++;
            if((i%2!=0) && (a%2==0)) o++;
            i++;
            
        }
        if(o==e)
        cout<<e<<endl;
        else
        cout<<-1<<endl;
    }
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    while(N--){
      int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c)
    {
        cout<<"STAIR"<<endl;

    }
    else if( a<b && c<b)
    {
        cout<<"PEAK"<<endl;
    }
    else
    {
        cout<<"NONE"<<endl;
    }
    }
    
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
         int c=0,flag=0;
        int a;cin>>a;
        for(int i=0; i<a*2; i++)
        {
            c++;
            for(int j=1; j<=a; j++)
            {
             if(flag==0)
             {
                if(j%2!=0)
                cout<<"##";
                else
                cout<<"..";
             }
             else 
             {
                if(j%2!=0) 
                cout<<"..";
                else
                cout<<"##";
                
             }

             
            }
            cout<<endl;


            if(c==2) flag=1;
            else if(c==4) 
            { flag=0; c=0;}

        }
    }
}


#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
    getline(cin,s);
    if(s[i]>='1' && s[1]>'2')
    {
        int a=stoi(s);
        int b=a%12;
        cout<<b;
        

    }

}
    

}

#include<bits/stdc++.h>
using namespace std;

void printNGE(int arr[], int n)
{
    stack<int>s;
    vector<int>v;
    s.push(ar[0]);
    for(int i=1; i<n; i++)
    {
        while(s.empty()== false && s.top()<ar[i] )
        {
            v.push_back(ar[i]);
            s.pop();
        }
        s.push(ar[i]);
    }
    while(s.empty()==false )
    {
        v.push_back(-1);
    }
   for(int i=v.begin(); i<v.end(); i++)
   {
    cout<<v[i]<<" ";
   }
}

int main(){

 int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}

#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int t;cin>>t;
    int h,m;
    while(t--)
    { 
        string s="AM";
        scanf("%d:%d",&h,&m);
        if(h>=12) s="PM";
        if(h>12) h-=12;
        if(h==00) h+=12;
        printf("%02d:%02d",h,m);
        cout<<" "<<s<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
void(int ar[],int n,int freq[])
{
    stack<int>s;
    s.push(0);
    int temp[n];
    for(int i=1;  i<n; i++)
    {
        if(freq[a[s.top()]] > a[i])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && (freq[a[s.top()]] < a[i]))
            {
                temp[s.top()]=a[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        temp[s.top()]=-1;
    }
}


int main()
{
     int a[] = { 1, 1, 2, 3, 4, 2, 1 };
    int len = 7;
    int mx=*max_element(a,a+len);
    cout<<mx;
    int freq[mx+1]={0};

    for(int i=0; i<len; i++)
    {
        freq[a[i]];
        
    }
   
}


#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
int t;
cin>>t;
while(t--){
int n,k; cin>>n>>k;
if(k == 1){
    for(int i=1;i<=n;i++) cout<<1<<" ";
    cout<<endl;
}else if(k == n){
    for(int i=1;i<=n;i++) cout<<i<<" ";
    cout<<endl;
}else{
    cout<<-1<<endl;
}
}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==k) 
        {
            for(int i=1;  i<=n ; i++)
            cout<<1<<" ";
            cout<<endl;
        }
        else if(k==1)
        {
            for(int i=1; i<=n; i++)
            cout<<i<<" ";
            cout<<endl;
            
        }
        else
        cout<<-1; 
        cout<<endl;


    }
}