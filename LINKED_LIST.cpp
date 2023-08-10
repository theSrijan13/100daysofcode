#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }

};
void insertatTail(Node* &head,int val)
{
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node*head=NULL;
    inertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    display(head);
    return 0;
}