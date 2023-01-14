#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node *head=0,*temp,*newnode;
    int choice,c,num;
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
    
    while(num){
        cout<<"Enter 1 for deletion of node at begning , 2 for deletion at given position , 3 to insert at end of list and 4 to exit: ";
        cin>>c;
     switch(c)
     {
         case 1:
            temp=head;
            head=head->next;
            delete temp;
        break;   

        case 2:
            node *end,*pre;
            int pos;
            cout<<"enter position where you want to delete : ";
            cin>>pos;
            end=head;
            pre=NULL;
           for(int i=1;i<pos;i++){
                pre=end;
                end=end->next;
            }
            pre->next=end->next;
            end->next=0;
            cout<<endl<<"hyy"<<endl;
            delete end;
            
        break;

        case 3:
            end=head;
            pre=NULL;
             while(end->next!=0){
                pre=end;
                end=end->next;
            }

            pre->next=NULL;
            delete end;
        break;

        case 4:
           
        break;
      }
      cout<<"enter 1 to delete another node and 0 to exit : ";
      cin>>num;
    }
    temp=head;
    while(temp!=0){
       cout<<"Data : "<<temp->data<<endl;
       cout<<"address : "<<temp->next<<endl;
       temp=temp->next;
    }
    return 0;
}
