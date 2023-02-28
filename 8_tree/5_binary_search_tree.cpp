#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
};
node *insert(node *root,int data){
    node *newnode;
    newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    cout<<"root : "<<root<<endl;
    if(root==0){
        return root=newnode;
    }
    if(data<root->data){
        cout<<"root data : "<<root->data;
       root->left=insert(root->left,data);
    }
    else if(data>root->data){
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(node *temp){
    if(temp==0){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
int main(){
   int d;
   node *root=0;
   cout<<"enter data and -1 for no node : ";
   cin>>d;
   while(d!=-1){
    root=insert(root,d);
    cout<<"root main  :  "<<root<<endl;
    cout<<"enter data and -1 for no node : ";
    cin>>d;
   }
  
   cout<<"inorder "<<endl;
   inorder(root);
}