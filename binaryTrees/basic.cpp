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
int main()
{
    Node* root=nullptr;
    root=insertNode(root,8);
    root=insertNode(root,1);
    root=insertNode(root,14);
    root=insertNode(root,7);
    root=deleteNode(root,14);
    inorder(root);
}