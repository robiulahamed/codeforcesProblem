 #include<bits/stdc++.h>
 using namespace std;
 int max_size=100;
 class Stack{
     private:
     int ar[max_size];
     int top;
     public:
        stack(){
        top = -1;
        bool isEmpty(){

        return top == -1;
            }
            bool isFull(){

            return top=max_size-1;
            }
        }
        void push(int value){

        if(inFull()){
            cout<<"stack is overflow"<<endl;
            return ;
        }
        ar[++top]=value

        }
        int pop(){
        if(isEmpty()){
            cout<<"stack underflow /n";
            return -1;
        }
        return ar[top--];

        }
        int peek(){
        if(isEmpty()){
            cout<<"stack is empty /n";
            return -1;
        }
        return arr[top];
        }
 });
 int main()
 {
     stack s;
     s.push(10);
     s.push(20);
     s.push(30);
     cout<<"the top element of staack : "<<stack.peek()<<endl;
     stack.pop();
     cout<<"top element after pop" <<stack.peek()<<endl;
     if(s.empty()){
        cout<<"empty"<<endl;
     }
     else
        cout<<"stackis not empty"<<endl;

 }
