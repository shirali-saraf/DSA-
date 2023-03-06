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
    // cout<<"root : "<<root<<endl;
    if(root==0){
        return root=newnode;
    }
    if(data<root->data){
        // cout<<"root data : "<<root->data;
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
void is_sort(int arr[],int n){
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            cout<<"False"<<endl;
        }
     }
   }
   cout<<"True"<<endl;
}
void check_bst(node *temp,int arr[],int &i){
    if(temp==0){
        return;
    }
    check_bst(temp->left,arr,i);
    arr[i]=temp->data;
    i++;
    check_bst(temp->right,arr,i);
    
}

int main(){
   int d,i=0,arr[20];
   node *root=0;
   cout<<"enter data and -1 for no node : ";
   cin>>d;
   while(d!=-1){
    root=insert(root,d);
    // cout<<"root main  :  "<<root<<endl;
    cout<<"enter data and -1 for no node : ";
    cin>>d;
   }
  
   cout<<"inorder "<<endl;
   inorder(root);
   check_bst(root,arr,i);
//    int size=sizeof(arr)/sizeof(arr[0]);
//    bool x=is_sort(arr,size);
//    if (x==1)
//    {
//     cout<<"Bst"<<endl;
//    }
//    else{
//     cout<<"Not"<<endl;
//    }
   cout<<"Size "<<i<<endl;
   is_sort(arr,i);

}