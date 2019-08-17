#include<iostream>
using namespace std;
struct node{
    int data; 
    node* next;

};

class linklist{
    public:
    node* head;

    linklist(){
        head = NULL;
    }

    void insertbeg(int data);
    void insertend(int data);
    void display();
};  

void linklist::display(){
    node* temp = head;
    while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    return;
}

void linklist::insertbeg(int data){

    node* temp = new node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

void linklist::insertend(int data){

    node* temp = head;
    node* tmp = new node;
    tmp->data = data;
    tmp->next = NULL;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = tmp;
}

int main()
{
    linklist a;
    a.insertbeg(1);     
    a.insertend(4);
    a.insertbeg(2);
    a.display();
    return 1; 
}