#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *insert(node *root, int data)
{
    node *newnode;
    newnode = new node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    // cout << "root : " << root << endl;
    if (root == 0)
    {
        return root = newnode;
    }
    if (data < root->data)
    {
        // cout << "root data : " << root->data;
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
void inorder(node *temp)
{
    if (temp == 0)
    {
        return;
    }
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}
void search(node *root, int num)
{
    if (root == NULL)
    {
        cout << " Called " << endl;
        cout << "not found...";
        return;
    }
    if (root->data == num)
    {
        cout << "number found : " << endl;
        return;
    }
    else if (num < root->data)
    {
        cout << "Root data : " << root->data << endl;
        cout << "Root->left " << root->left << endl;
        search(root->left, num);
        return;
    }
    else
    {
        search(root->right, num);
        return;
    }
}
int main()
{
    int d, num;
    node *root = 0;
    cout << "enter data and -1 for no node : ";
    cin >> d;
    while (d != -1)
    {
        root = insert(root, d);
        // cout << "root main  :  " << root << endl;
        cout << "enter data and -1 for no node : ";
        cin >> d;
    }

    cout << "inorder " << endl;
    inorder(root);
    cout << endl
         << "enter number to be search : ";
    cin >> num;
    search(root, num);
}