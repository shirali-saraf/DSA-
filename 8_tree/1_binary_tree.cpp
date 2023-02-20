#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *left;
};

node *create(){
    node *newnode;
    int x,c;
    cout<<endl<<"enter 0 for no node and 1 for new node : ";
    cin>>c;
    if(c==0){
        return 0;
    }
    newnode=new node();
    cout<<"enter data : ";
    cin>>x;
    newnode->data=x;
    cout<<endl<<"enter left child for "<<x;
    newnode->left=create();
    cout<<endl<<"enter right child for "<<x;
    newnode->right=create();
    return newnode;
}
int main(){
    node *root=0;
    root=create();
}