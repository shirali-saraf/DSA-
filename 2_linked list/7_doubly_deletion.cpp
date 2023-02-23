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
    int choice,c,num;
    while(choice)
    {
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = NULL;
       newnode->previous = NULL;
       if(head==0){
           head=temp=end=newnode;
       }
       else{
           temp->next=newnode;
           newnode->previous=temp;
           temp=temp->next;
           end=end->next;
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
            head->previous=NULL;
            delete temp;    
        break;   
        
        case 2:
            node *forward;
            forward=head->next;
            temp=head;
            int pos;
            cout<<"enter position where you want to delete : ";
            cin>>pos;
            for(int i=1;i<pos;i++){
                forward=forward->next;
                temp=temp->next;
            }
            forward->previous=temp->previous;
            forward=forward->previous;
            forward->next=temp->next;
            delete temp;
            
        break;

        case 3:
            temp=end;
            end=end->previous;
            end->next=NULL;
            delete temp;
        break;

        case 4:
           
        break;
      }
      cout<<"enter 1 to insert another node and 0 to exit : ";
      cin>>num;
    }

    temp=head;
    while(temp!=0){
       cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->next<<endl;
       temp=temp->next;
    }
    cout<<endl<<endl;
    while(end!=0){
       cout<<"Data : "<<end->data<<endl;
       cout<<"address : "<<end->previous<<endl;
       end=end->previous;
    }

    return 0;
}
