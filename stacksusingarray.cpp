#include<iostream>
using namespace std;

class Stack{

    int arr[1000];

    public:

    Stack(){
        top = -1;
        maxsize = 1000;
    }
    
    int top;
    int  maxsize;
    void push(int data);
    void pop();
    void peek();
};

void Stack::pop()
{   
    if(top==-1)
        {
            cout<<"Underflow";
            return;
            }
    cout<<arr[top];
    arr[top] = 0;
    top--;
}

void Stack::push(int data){

    if(top == maxsize)
        {
            cout<<"Overflow";
            return;
        }

    top++;
    arr[top] = data;
}

void Stack::peek(){
    cout<<arr[top];
}

int main(){

    Stack a;
    a.push(1);
    a.peek();
    a.push(2);
    a.peek();
    a.pop();
    a.pop();
    a.pop();



    return 1;

}