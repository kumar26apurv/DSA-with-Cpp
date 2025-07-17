#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        //memopry free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};

//traversing linked list
void print(Node* tail)
{
    Node* temp=tail;
    //empty list
    if(tail==NULL){
        cout<<"List is empty. "<<endl;
        return;
    }

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

void insertnode(Node* & tail, int d, int element)
{
    //empty list
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        //non-empty list
        Node* curr= tail;
        while(curr->data != element)
        {
            curr=curr->next;
        }

        //element found,  current is representing the element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail, int value)
{
    //emptylist
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    else{
        //assuming that value is present
        Node* prev=tail;
        Node* curr=prev->next;
        
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }

        //for single node in the list deletion
        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;
        }

        //>=2 number of nbode
        if(tail==curr)
        {
            tail=curr->next; //tail=prev,  we can write any condition but when we point previous the last element comes forst if we delete first element or the last element of the list
        }

        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    Node* tail=NULL;

    // deleteNode(tail,5);
    // print(tail);

    insertnode(tail,10,5);
    print(tail);

    insertnode(tail,13,10);
    print(tail);

    insertnode(tail,16,13);
    print(tail);

    insertnode(tail,14,10);
    print(tail);

    insertnode(tail,18,14);
    print(tail);

    deleteNode(tail,10);
    print(tail);

    deleteNode(tail,18);
    print(tail);

    deleteNode(tail,16);
    print(tail);

    return 0;
}