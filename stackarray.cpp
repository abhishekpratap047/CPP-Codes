#include<iostream>
using namespace std;
#define MAX 1000

class stack{
    int top;

    public:
        int a[MAX];

        stack(){
            top=-1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool stack::push(int x){
    if(top>=MAX-1){
        cout<<"Stack Overflow";
        return false;
    }
    else{
        top=top+1;
        a[top]=x;
        cout<<x<<" pushed into stack\n";
        return true;
    }
}

int stack::pop(){
    if(top<0){
        cout<<"Stack Underflow";
        return 0;
    }
    else{
        int x=a[top];
        top=top-1;
        return x;
    }
}

bool stack::isEmpty(){
    if(top<0){
        return true;
    }
    else return false;
}

int stack::peek(){
    if(top<0){
        cout<<"Stack is empty";
        return 0;
    }
    else{
        int x=a[top];
        return x;
    }
}

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<< " Popped from stack"<<endl;
    cout<<s.pop()<<" Popped from stack"<<endl;
    cout<<"Element peeked : "<<s.peek()<<endl;

}