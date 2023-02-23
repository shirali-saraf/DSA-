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
    int g=1;
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
        cout<<"Enter 1 for deletion of node at begning , 2 for deletion at given position , 3 to delete at end of list and 4 to exit: ";
        cin>>c;
     switch(c)
     {
        case 1:    
                temp=head;
                head=head->next;
                end->next=head;
                delete temp;
        
        break;   

        case 2: 
            node *pre;
            pre=NULL;
            temp=head;
            int pos;
            cout<<"enter position where you want to delete : ";
            cin>>pos;
            while(g<pos){
                pre=temp;
                temp=temp->next;
                g++;
            }    
            pre->next=temp->next;
            delete temp;      
        break;

        case 3:
            end=NULL;
            temp=head;
            while(temp->next!=head){
                end=temp;
                temp=temp->next;
            }
            end->next=head;
            delete temp;
            cout<<endl<<"helo";

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
