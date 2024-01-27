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
Node* mergeList(Node* head1,Node* head2)
{
    Node* ptr1=head1;
    Node* ptr2=head2;
    if(ptr1->data>ptr2->data)
    {
        Node* temp=ptr1;
        ptr1=ptr2;
        ptr2=temp;
    }
    
    // ptr1=ptr1->next;
    Node* res=ptr1;
    while(ptr1!=nullptr&& ptr2!=nullptr)
    {
        Node*temp=nullptr;
        while(ptr1!=nullptr&& ptr1->data<=ptr2->data)
        {
            temp=ptr1;
            ptr1=ptr1->next;
        }
    

        
        
        temp->next=ptr2;
        temp=ptr1;
        ptr1=ptr2;
        ptr2=temp;
    }
    return res;
}
int main()
{
    Node* head=nullptr;
    head=insertAtEnd(1,head);
    head=insertAtEnd(19,head);
    head=insertAtEnd(21,head);
    head=insertAtEnd(24,head);
    head=insertAtEnd(40,head);
    Node* head2=nullptr;
    head2=insertAtEnd(7,head2);
    head2=insertAtEnd(12,head2);
    head2=insertAtEnd(16,head2);
    head2=insertAtEnd(20,head2);
    head2=insertAtEnd(111,head2);
    display(head);
    display(head2);
    head=mergeList(head,head2);
    display(head);
}