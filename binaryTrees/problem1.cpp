#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* left;
    Node* right;
    Node(){
        data=0;
        left=nullptr;
        right=nullptr;
    }
    Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
Node* insertNode(Node* ptr,int value)
{
    if(ptr==nullptr)
    {
        Node* newnode=new Node(value);
        return newnode;
    }
    if(value<ptr->data)
    {
        ptr->left=insertNode(ptr->left,value);
    }
    else if(value>ptr->data)
    {
        ptr->right=insertNode(ptr->right,value);
    }
    return ptr;
}
Node* deleteNode(Node* ptr,int value)
{
    if(ptr==nullptr)
    {
        cout<<"the node is not present";
        return ptr;
    }
    else if(value<ptr->data)
    {
        ptr->left=deleteNode(ptr->left,value);
    }
    else if(value>ptr->data)
    {
        ptr->right=deleteNode(ptr->right,value);
    }
    else{
        if(ptr->left!=nullptr&& ptr->right!=nullptr)
        {
            Node* succ=ptr->right;
            while(succ->left!=nullptr)
            succ=succ->left;

            ptr->data=succ->data;
            ptr->right=deleteNode(ptr->right,succ->data);
        }
        else if(ptr->left!=nullptr )
        {
            Node* temp=ptr->left;
            delete ptr;
            return temp;
        }
        else
        {
            Node* temp=ptr->right;
            delete ptr;
            return temp;
        }
    } return ptr;
}
void inorder(Node* root)
{
    if(root==nullptr)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int height(Node* root)
{
    if(root==nullptr)
    return 0;
    else{
        int lheight=height(root->left);
        int rheight=height(root->right);
        if(lheight>rheight)
        return lheight+1;
        else
        return rheight+1;
    }
}
bool isEqual(Node* p,Node * q)
{
    if(p==nullptr&&q==nullptr){
        return true;
    }
    if(p!=nullptr&& q!=nullptr)
    {
    return (p->data==q->data)&&isEqual(p->left,q->left)&&isEqual(p->right,q->right);
    }
    return 0;
}
void invertTree(Node* root)
{
    if(root==nullptr)
    return ;
    invertTree(root->left);
    invertTree(root->right);
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    return;
}
int main()
{
    Node* root=nullptr;
    root=insertNode(root,8);
    root=insertNode(root,1);
    root=insertNode(root,14);
    root=insertNode(root,7);
    inorder(root);
    cout<<endl;
    // Node* root2=nullptr;
    // root2=insertNode(root2,8);
    // root2=insertNode(root2,1);
    // root2=insertNode(root2,14);
    // root2=insertNode(root2,7);
    // cout<<"the trees are same??: "<<isEqual(root,root2);
    // cout<<"height of the tree: "<<height(root)<<endl;
    // inorder(root);
    invertTree(root);
    inorder(root);
}