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
void level(node *root,int l){
    if(root==0){
        return;
    }
    else if(l==1){
        cout<<root->data<<" ";
    }
    else{
        level(root->left,l-1);
        level(root->right,l-1);
    }

}
int height(node *root){
    if(root==0){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh>rh){
        return lh+1;
    }
    else{
        return rh+1;
    }
}
void preorder(node *temp){
    if(temp==0){
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(node *temp){
    if(temp==0){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void postorder(node *temp){
    if(temp==0){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}
int main(){
    node *root=0;
    root=create();
    cout<<"preorder : "<<endl;
    preorder(root);
    cout<<endl<<"inorder : "<<endl;
    inorder(root);
    cout<<endl<<"postorder : "<<endl;
    postorder(root);
    int h=height(root);
    cout<<endl<<"level order : "<<endl;
    for(int i=1;i<=h;i++){
      level(root,i);
    }
}