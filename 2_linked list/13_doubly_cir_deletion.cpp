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
        cout<<"Enter 1 for deletion of node at begning , 2 for deletion at given position , 3 to delete at end of list and 4 to exit: ";
        cin>>c;
     switch(c)
     {
        case 1:
            temp=head;
            head=head->next;
            head->previous=end;
            end->next=head;
            delete temp;
        break;   

        case 2:
            int g;
            g=1;
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
            pre=pre->next;
            pre->previous=temp->previous;
            delete temp;
               
        break;

        case 3:
            temp=end;
            end=end->previous;
            end->next=head;
            head->previous=end;
            delete temp;
            
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
