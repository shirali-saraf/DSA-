#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node *head=0,*temp,*newnode;
    int choice,c;
    while(choice)
    {
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = NULL;
       if(head==0){
           head=temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=temp->next;
       }
       
       cout<<"enter 1 to add more node and 0 to exit : ";
       cin>>choice;
    }
    
    cout<<"Enter 1 for insertion at begning , 2 for insertion at given position , 3 to insert at end of list : ";
    cin>>c;
    switch(c){
        case 1:
            newnode=new node();
            cout<<"enter data : ";
            cin>>newnode->data;
            newnode->next=head;
            head=newnode;
        break;   

        case 2:
            node *temp2;
            temp2=head;
            int pos;
            cout<<"enter position where you want to insert : ";
            cin>>pos;
            newnode=new node();
            cout<<"enter data : ";
            cin>>newnode->data;
            for(int i=1;i<pos-1;i++){
                temp2=temp2->next;
            }
            newnode->next=temp2->next;
            temp2->next=newnode;

        break;

        case 3:
            newnode=new node();
            cout<<"enter data : ";
            cin>>newnode->data;
            newnode->next=NULL;
            temp->next=newnode;
        break;
    }
    temp=head;
    while(temp!=0){
       cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->next<<endl;
       temp=temp->next;
    }
    return 0;
}
