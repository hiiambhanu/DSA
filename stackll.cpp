#include<iostream>
using namespace std;
struct  node
{
    int data;
    node* next;

};

class Stack{
    node* top;

    public:
    Stack()
        {
            top = NULL;
        }
    
    void push(int data);
    void pop();
    int peek();
};

void Stack::push(int data){
    node * temp = new node;
    temp->data = data;

    if(top == NULL)    
        {
            top = temp;
            temp->next = NULL;
        }
    else {
        temp->next = top;
        top = temp;
        }

}
void Stack::pop(){
    if(top == NULL) 
        {
            cout<<"No element to pop";
            return;
        }

    else
    {
        top = top->next;
    }
    
}

int Stack::peek(){
    return top->data;
}
int main(){

    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    cout<<a.peek()<<endl;
    a.pop();
    
    cout<<a.peek()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
    a.pop();
    return 0;
}