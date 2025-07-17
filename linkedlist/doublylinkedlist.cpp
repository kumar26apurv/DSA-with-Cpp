#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int value=this->data;
        //memopry free
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};

// Traversing doubly linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Get length of a linked list
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    // If list is empty
    if (head == NULL) {
        head = tail = temp; // Set both head and tail to new node
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    // If list is empty
    if (tail == NULL) {
        tail = temp; // Set tail to new node
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node*& tail, Node*& head, int position, int d) {
    // Insert at first position
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the position before where we want to insert
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at the end
    if (temp == NULL) { // If we've reached the end or position is out of bounds
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;

    if (temp->next != NULL) { // If it's not inserting at the end
        temp->next->prev = nodeToInsert; // Link back to new node
    }
    
    temp->next = nodeToInsert; // Link current node to new node
    nodeToInsert->prev = temp; // Link new node back to current node
}

void deleteNode(int position, Node* &head)
{
    //starting node
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next; 
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle ot last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    Node* head = NULL; // Initialize head as NULL
    Node* tail = NULL; // Initialize tail as NULL

   // Insertions and printing
   insertAtHead(head, tail, 10);
   print(head);

   insertAtHead(head, tail, 15);
   print(head);

   insertAtHead(head, tail, 13);
   print(head);

   insertAtHead(head, tail, 7);
   print(head);

   insertAtTail(tail, 22);
   print(head);

   insertAtPosition(tail, head, 4, 12);
   print(head);

   insertAtPosition(tail, head, 1, 18);
   print(head);

   deleteNode(1,head);
   print(head);

   deleteNode(4,head);
   print(head);

   deleteNode(5,head);
   print(head);

   return 0;
}
