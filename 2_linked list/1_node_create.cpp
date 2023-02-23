#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node *head=0,*newnode;
       newnode=new node();
       cout<<"enter data : ";
       cin>>newnode->data;
       newnode->next = NULL;
       cout<<newnode->data<<endl;
       cout<<newnode->next<<endl;

    return 0;
}
