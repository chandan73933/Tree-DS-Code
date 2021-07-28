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
void postorder(node *root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
cout<<(root->data)<<" ";
}
}
int main()
{
node *root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left=new node(40);
postorder(root);
}
