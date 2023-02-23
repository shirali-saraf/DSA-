#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node *head=0,*temp,*newnode,*end;
    int choice,num,c;
    while(choice)
    {
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = head;
       if(head==0){
           head=temp=end=newnode;
           newnode->next=head;
       }
       else{
           end=newnode;
           temp->next=newnode;
           newnode->next=head;
           temp=temp->next;
       }
       
       cout<<"enter 1 to add more node and 0 to exit : ";
       cin>>choice;
    }
    while(num){
        cout<<"Enter 1 for insertion of node at begning , 2 for insertion at given position , 3 to insert at end of list and 4 to exit: ";
        cin>>c;
     switch(c)
     {
        case 1:
            newnode=new node();
            cout<<"enter data of new node : ";
            cin>>newnode->data;
            
            if(head==0){
                head=newnode;
                newnode->next = head;
            }
            
             newnode->next=head;
                //risky hai
                head=newnode;
                end->next=newnode;    
        break;   

        case 2:
            temp=head;
            int pos;
            cout<<"enter position where you want to insert : ";
            cin>>pos;
            newnode=new node();
            cout<<"enter data : ";
            cin>>newnode->data;
            newnode->next = head;
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            
            
        break;

        case 3:
            newnode=new node();
            cout<<"enter data of new node : ";
            cin>>newnode->data;
            newnode->next=head;
            end->next=newnode;
            end=newnode;
        break;

        case 4:
           
        break;
      }
      cout<<"enter 1 to insert another node and 0 to exit : ";
      cin>>num;
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
