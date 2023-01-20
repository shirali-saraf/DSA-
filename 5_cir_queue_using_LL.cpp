#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void enqueue(node *&front,node *&rear,int data){
    node *newnode;
    newnode=new node();
    newnode->data=data;
    newnode->next=0;
    if((front==0)&&(rear==0)){
        front=rear=newnode;
        newnode->next=front;
    }
    else{
        rear->next=newnode;
        newnode->next=front;
        rear=newnode;
    }
}
void dequeue(node *&front,node *&rear){
    node *temp;
    temp=front;
    if((front==0)&&(rear==0)){
        cout<<"empty queue : "<<endl;
    }
    else{
        front=front->next;
        temp->next=0;
        delete temp;
        rear->next=front;
    }
}
void display(node *&front,node *&rear){
    node *temp;
    temp=front;
    if((front==0)&&(rear==0)){
        cout<<"empty queue : "<<endl;
    }
    else{
        while(temp->next!=front){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
    }
}

int main(){
    node *front=0,*rear=0;
    enqueue(front,rear,10);
    enqueue(front,rear,15);
    enqueue(front,rear,5);
    enqueue(front,rear,4);
    dequeue(front,rear);
    display(front,rear);
    return 0;
}
