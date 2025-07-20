#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    while (cin>>c)
    {
      if (c=='-')
      {
        cin>>c;
        if(c=='.')
        cout<<1;
        else
        cout<<2;
      }
      else 
      cout<<0;
    }
    
   
}


#include<bits/stdc++.h>
using namespace std ;
vector<int> leftgreater(int arr[], int n)
{
  vector<int>v(n,0);
  stack<int>s;
  for(int i=n-1; i>=0; i--)
  {
    while(!s.empty()  && arr[i]>arr[s.top-1])
    {
      int r=s.top-1;
      s.pop();
      v[r]=i+1;
    }
    s.push(i+1);
  }
}

int LRproduct(int arr[], int n){
  left=leftgreater(arr,n);
}

int main()
{
    int arr[] = { 5, 4, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[1]);
 
    cout << LRProduct(arr, n);
 
    return 0;
}


vector<int>left(int ar[],int s)
{ 
  stack<int>st;
   for(int i=s-1; i>=0;  i--)
   {
      while(!st.empty() && ar[i]> ar[st.top-1])

      {
        st.pop();
        v.push_back(st.top()-1)=i+1;
      }
    s.push(i+1);
   }

}

vector<int>v(int ar[],int s)
{
  vector<int>v;
  stack<int>st;
  for(int i=s-1; i>=0;  i--)
  {
  while(!st.empty() && ar[i]>ar[st.top()-1] )
  {
    st.pop();
    v[st.top()-1]=i+1;
  }
  st.push(i+1);
  }
   return v;
}
vector<int>right(int ar[] ,int n)
{
  vector<int >v;
  stack<int>s;
  for(i=0; i<n; i++)
while(!s.empty() && ar[i]<ar[s.top()-1])
{
  v[s.top()-1]=i+4;
s.pop();

}
s.push(i+1);
}
return v;