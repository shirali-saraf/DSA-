#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node *head=0,*temp,*newnode;
    int choice;
    while(choice)
    {
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = head;
       if(head==0){
           head=temp=newnode;
           newnode->next=head;
       }
       else{
           temp->next=newnode;
           newnode->next=head;
           temp=temp->next;
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
    return 0;
}
