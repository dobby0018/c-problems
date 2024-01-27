#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node(){
        data=0;
        next=nullptr;
    }
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* insertAtEnd(int data,Node* head)
{
    Node* newnode=new Node(data);
    if(head==nullptr)
    {
        
        return newnode;
    }
    Node* temp=head;
    while(temp->next!=nullptr)
    temp=temp->next;


    temp->next=newnode;
    return head;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=nullptr;
    head=insertAtEnd(9,head);
    head=insertAtEnd(19,head);
    head=insertAtEnd(1,head);
    head=insertAtEnd(24,head);
    head=insertAtEnd(4,head);
    display(head);
}