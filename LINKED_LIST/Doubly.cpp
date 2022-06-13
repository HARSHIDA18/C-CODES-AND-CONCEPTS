#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node* previous;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->previous=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if   (this->previous!=NULL&&this->next!=NULL)
        {
            this->previous=NULL;
            this->next=NULL;
            delete previous;
            delete next;
        }
        cout<<"Data In The Deleted Node Is="<<value;
    }
};
void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->previous=temp;
    head=temp;
}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    temp->previous=tail;
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
        temp->next->previous=newNode;
        temp->next=newNode;
        newNode->previous=temp;
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
        Node* previous1=NULL;
        Node* current=head;
        int count=0;
        while   (count<position)
        {
            previous1=current;
            current=current->next;
            count++;
        }
        previous1->next=current->next;
        current->next->previous=previous1;
        current->next=NULL;
        current->previous=NULL;
        delete current;
    }
}
void Print(Node* &head)
{
    Node* temp=head;
    if   (temp==NULL)
    {
        cout<<"The Linked-List Is Empty."<<endl;
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
void PrintReverse(Node* &tail)
{
    Node* temp=tail;
    if   (temp==NULL)
    {
        cout<<"The Linked-List Is Empty."<<endl;
        return;
    }
    else 
    {
        while   (temp!=NULL)
        {
            cout<<temp->data<<"   ";
            temp=temp->previous;
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
    InsertAtMiddle(tail,head,3,16);
    InsertAtTail(tail,18);
    cout<<"The Elements In The Linked-List Are=";
    Print(head);
    cout<<endl;
    cout<<"The Elements In The Reversed Linked-List Are=";
    PrintReverse(tail);
    cout<<endl;
    Delete(head,tail,3);
    cout<<"Elements After Deletion In The Linked-List Is As Follows=";
    Print(head);
    cout<<endl;
    cout<<"Elements After Deletion In The Reversed Linked-List Is As Follows=";
    PrintReverse(tail);
    cout<<endl;
    return 0;
    getchar();
}