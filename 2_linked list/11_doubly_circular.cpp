#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *previous;
};
int main(){
    node *head=0,*temp,*newnode,*end;
    int choice;
    while(choice)
    {
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = NULL;
       newnode->previous = NULL;
       if(head==0){
           head=temp=end=newnode;
           head->next=head;
           head->previous=head;
       }
       else{
           temp->next=newnode;
           newnode->previous=temp;
           newnode->next=head;
           head->previous=newnode;
           temp=temp->next;
           end=end->next;
       }
       
       cout<<"enter 1 to add more node and 0 to exit : ";
       cin>>choice;
    }
    temp=head;
    while(temp->next!=head){
       cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->next<<endl;
       temp=temp->next;
    }
    cout<<"Data : "<<temp->data<<endl;
     cout<<"address : "<<temp->next<<endl;
    // temp=temp->next;
    //  cout<<"Data : "<<temp->data<<endl;
    cout<<endl;
    temp=end;
    while(temp->previous!=end){
       cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->previous<<endl;
       temp=temp->previous;
    }
    cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->previous<<endl;
    return 0;
}
