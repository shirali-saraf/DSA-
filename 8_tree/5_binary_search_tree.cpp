#include<iostream>
using namespace std;
class node{
    int data;
    node *left;
    node *right;
};
node *insert(){
    node *newnode;
    newnode=new node();
    cout<<"enter data ";
    cin>>newnode->data;
    


}
int main(){
   node *root=0;
   root=insert();
}