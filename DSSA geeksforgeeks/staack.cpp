#include<bits/stdc++.h>
using namespace std;

void printst(int ar[],int s,int st[])
{
    st[0]=1;
    for(int i=1; i<s; i++)
    {
        st[i]=1;
        for(int j=i-1; j>=0; j--)
        {
            if(ar[j]<ar[i])
            {
                st[i]++;
            }
        }
    }
    
}

void printar(int arr[],int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int ar[]={ 2,5,3,7,8,5}
    int s=sizeof(ar)/sizeof(ar[0])
    int st[s];
    printst(ar,s,st);
    printar(st,s);
}




// C++ program for brute force method
// to calculate stock span values
#include <bits/stdc++.h>
using namespace std;

// Fills array S[] with span values
void calculateSpan(int price[], int n, int S[])
{
	// Span value of first day is always 1
	S[0] = 1;

	// Calculate span value of remaining days
	// by linearly checking previous days
	for (int i = 1; i < n; i++) {
		S[i] = 1; // Initialize span value

		// Traverse left while the next element
		// on left is smaller than price[i]
		for (int j = i - 1;
			(j >= 0) && (price[i] >= price[j]); j--)
			S[i]++;
	}
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int price[] = { 10, 4, 5, 90, 120, 80 };
	int n = sizeof(price) / sizeof(price[0]);
	int S[n];

	// Fill the span values in array S[]
	calculateSpan(price, n, S);

	// print the calculated span values
	printArray(S, n);

	return 0;
}

// This is code is contributed by rathbhupendra


#include<iostream>
using namespace std;

class myclass
{
    public:
    int n;
    string s;
    myclass(int a,string b)
    {
        n=a;
        s=b;
    }
   
};



int main()
{
    myclass num={10,"ahamed"};
    myclass num2={20,"robiul"};
    
    
    cout<<num.n<<" ";
    cout<<num.s<<endl;
    cout<<num2.n<<endl;
    cout<<num2.s<<endl;;
    
}

//encapsulation in oop for cc++
#include<iostream>
using namespace std;
class encap{
    private:
    int salary;
    public:
    void sets(s){
        salary=s;
    }
    void gets(){
        return salary;
    }


};

int main()
{
    encap en;
    en.sets(100);
    cout<<en.gets();
}





#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int ar[n+1];
       for(int i=1; i<=n; i++)
       {
        cin>>ar[i];
       }
       sort(ar+1,ar+n+1);
       int m=(n+1)/2;
       int an=1;
       for(int i=n+1; i<=n; i++)
       {
        if(ar[i]==ar[i-1])
         {an++;}
         else
         break;
       }
       cout<<an<<endl;
    }
}