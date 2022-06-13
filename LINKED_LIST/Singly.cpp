#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if   (this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
        cout<<"Data Of The Deleted Node="<<value<<endl;
    }
};
void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtMiddle(Node* &tail,Node* &head,int position,int d)
{
    if   (position==1)
    {
        InsertAtHead(head,d);
        return;
    }
    else 
    {
        Node* temp=head;
        int count=0;
        while   (count<position-1)
        {
            temp=temp->next;
            count++;
        }
        Node* newNode=new Node(d);
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void Delete(Node* &head,Node* &tail,int position)
{
    if   (position==1)
    {
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else 
    {
        Node* previous=NULL;
        Node* current=head;
        int count=0;
        while   (count<position)
        {
            previous=current;
            current=current->next;
            count++;
        }
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}
void Print(Node* &head)
{
    Node* temp=head;
    if   (temp==NULL)
    {
        cout<<"Linked-List Is Empty."<<endl;
        return;
    }
    else 
    {
        while   (temp!=NULL)
        {
            cout<<temp->data<<"   ";
            temp=temp->next;
        }
    }
}
int main   ()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(head,12);
    InsertAtHead(head,14);
    InsertAtMiddle(tail,head,2,16);
    InsertAtTail(tail,18);
    cout<<"The Elements In The Linked-List Is As Follows=";
    Print(head);
    cout<<endl;
    Delete(head,tail,3);
    cout<<"Elements In The Linked-List After Deletion=";
    Print(head);
    cout<<endl;
    return 0;
    getchar();
}