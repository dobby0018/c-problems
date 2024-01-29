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

Node* reverse(Node* head)
{
    Node* prev=nullptr;
    Node* curr=head;
    Node* nex=nullptr;
    while(curr!=nullptr)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    head=prev;

}
void palindrome(Node* head)
{
    Node* slow=head,* fast=head,* prev_slow=nullptr;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        fast=fast->next->next;
        prev_slow=slow;
        slow=slow->next;
    }
    
    Node* last=prev_slow;
    if(fast!=nullptr)
    {
        prev_slow=slow;
        slow=slow->next;
    }
    prev_slow->next=reverse(prev_slow->next);
    
    
    
    Node* temp1=head,* temp2=prev_slow->next;
    while(temp1!=last->next&&temp2!=nullptr)
    {
        
        if(temp1->data!=temp2->data)
            {
                cout<<"not a palindrome"<<endl;
                prev_slow->next=reverse(prev_slow->next);

                return;
            }
            temp1=temp1->next;
            temp2=temp2->next;
    }
    cout<<"it is a palindrome"<<endl;
    prev_slow->next=reverse(prev_slow->next);
    
    

}
int main()
{
    Node* head=nullptr;
    head=insertAtEnd(111,head);
    head=insertAtEnd(9,head);
    head=insertAtEnd(9,head);
    head=insertAtEnd(11,head);
    
    
    palindrome(head);
    display(head);
}