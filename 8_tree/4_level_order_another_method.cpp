//................by using queue................................................
#include<iostream>
#include<queue>
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
void level(node *root){
    queue<node*>q;
    if(root==0){
        return;
    }
    q.push(root);
    while(!q.empty()){
        node *n=q.front();
        cout<<n->data<<" ";
        q.pop();
        if(n->left!=0){
            q.push(n->left);
        }
        if(n->right!=0){
            q.push(n->right);
        }
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
    cout<<endl<<"level order : "<<endl;
    level(root);
    
}