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
    int choice,num,c;
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
    
    while(num){
        cout<<"Enter 1 for insertion of node at begning , 2 for insertion at given position , 3 to insert at end of list and 4 to exit: ";
        cin>>c;
     switch(c)
     {
        case 1:
            newnode=new node();
            cout<<"enter data of new node : ";
            cin>>newnode->data;
            newnode->previous=end;
            newnode->next=head;
            head->previous=newnode;  
            head=newnode;   
            end->next=head;
        break;   

        case 2:
            int g;
            g=1;
            node *pre;
            pre=NULL;
            temp=head;
            int pos;
            cout<<"enter position where you want to insert : ";
            cin>>pos;
            newnode=new node();
            cout<<"enter data : ";
            cin>>newnode->data;
            newnode->next = head;
            while(g<pos){
                pre=temp;
                temp=temp->next;
                g++;
            }
            newnode->previous=pre;
            newnode->next=temp;
            pre->next=newnode;
            temp->previous=newnode;
               
        break;

        case 3:
            newnode=new node();
            cout<<"enter data of new node : ";
            cin>>newnode->data;
            newnode->previous=end;
            newnode->next=head;
            head->previous=newnode;
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
