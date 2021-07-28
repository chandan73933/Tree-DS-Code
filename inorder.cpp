#include<iostream>
using namespace std;
struct node
{
int data;
struct node *left;
struct node *right;
node(int x)
{
data=x;
left=right=NULL;
}
};
void inorder(node *root)
{
if(root!=NULL)
{
inorder(root->left);
cout<<(root->data)<<" ";
inorder(root->right);
}
}
int main()
{
node *root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left=new node(40);
inorder(root);
}
