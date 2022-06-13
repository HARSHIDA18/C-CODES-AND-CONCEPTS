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
        cout<<"Data In The Deleted Node="<<value;
    }
};
void Insert(Node* &tail,int position,int d)
{
    Node* temp=tail->next;
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
void Delete(Node* &tail,int position)
{
    Node* previous=tail;
    Node* current=tail->next;
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
void Print(Node *&tail)
{
    Node* temp=tail;
    do 
    {
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
    while   (temp->next!=tail);
}
int main   ()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    Insert(tail,2,12);
    Insert(tail,1,23);
    Insert(tail,0,21);
    cout<<"The Elements In The Circular Linked-List Is As Follows=";
    Print(tail);
    cout<<endl;
    Delete(tail,2);
    cout<<"The Elements In The Circular Linked-List After Deletion Of An Element Is As Follows=";
    Print(tail);
    cout<<endl;
    return 0;
    getchar();
}