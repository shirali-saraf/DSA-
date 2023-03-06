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
    cout << "root : " << root << endl;
    if (root == 0)
    {
        return root = newnode;
    }
    if (data < root->data)
    {
        cout << "root data : " << root->data;
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
node *successor(node *root)
{
    if (root->left == 0)
    {
        return root;
    }
    // root=root->right;
    successor(root->left);
    return 0;
}
node *predecessor(node *root)
{
    if (root->right == 0)
    {
        return root;
    }
    predecessor(root->right);
    // return 0;
}
node *deletion(node *root, int val)
{
    if (root == 0)
    {
        cout << "called" << endl;
        return root;
    }
    if (root->data == val)
    {
        if (root->left == 0 && root->right == 0)
        {
            delete root;
            return NULL;
        }
        else if (root->left != 0 && root->right == 0)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == 0 && root->right != 0)
        {
            node *temp2 = root->right;
            delete root;
            return temp2;
        }
        else if (root->left != 0 && root->right != 0)
        {
            node *s = successor(root->right);
            root->data = s->data;
            root->right = deletion(root->right, s->data);
            return root;
        }
    }
    else if (val < root->data)
    {
        deletion(root->left, val);
        return root;
    }
    else if (val > root->data)
    {
        deletion(root->right, val);
        return root;
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
int main()
{
    int d, val;
    node *root = 0;
    cout << "enter data and -1 for no node : ";
    cin >> d;
    while (d != -1)
    {
        root = insert(root, d);
        cout << "root main  :  " << root << endl;
        cout << "enter data and -1 for no node : ";
        cin >> d;
    }

    cout << "inorder " << endl;
    inorder(root);
    node *s = successor(root->right);
    cout << endl
         << "successor : " << s->data << endl;
    node *p = predecessor(root->left);
    cout << endl
         << "predecessor : " << p->data << endl;
    cout << "enter value for deletion : ";
    cin >> val;
    root = deletion(root, val);
    cout << endl
         << "after deletion : ";
    inorder(root);
}