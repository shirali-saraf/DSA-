#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

void push(node *&top){
    node *newnode;
    newnode=new node();
    cout<<"enter data : ";
    cin>>newnode->data;
    newnode->next=NULL;
    if(top==0){
      top=newnode;
      
    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
void pop(node *&top){
     node *temp;
     temp=top;
     if(top==0){
         cout<<"empty stack : "<<endl;
     }
     else{
        top=temp->next;
        delete temp;
     }
}
void display(node *&top){
    if(top==0){
        cout<<"stack empty : "<<endl;
    }
    else{
        while(top!=0){
            node* temp;
            temp=top;
            cout<<top->data<<endl;
            top=top->next;
            delete temp;
        }
    }
}
void isEmpty(node *&top){
    if(top==0){
        cout<<"stack empty : "<<endl;
    }
    else{
        cout<<"stack is not empty : "<<endl;
    }
}


int main(){
    node *top=0;
    push(top);
    push(top);
    push(top);
    isEmpty(top);
    pop(top);
    display(top);
    isEmpty(top);
}    