#include<iostream>
#include<map>
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
    ~Node(){
        int value=this->data;
        //memopry free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};
void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtHead(Node* &head, int d)
{
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    //insert at first position
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at the end
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    //create a node for d
    Node* nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}

//traverse a linked list
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int position, Node* &head)
{
    //starting node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

bool detectLoop(Node * head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;

    Node *temp = head;

    while(temp!=NULL){

        //cycle is present
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return slow; // Return the intersection point
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node *intersection = floydDetectLoop(head);
    if(intersection == NULL){
        return NULL; // No loop detected
    }
    Node *slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node *startOfLoop = getStartingNode(head);
    Node *temp = startOfLoop;
    while(temp->next!=startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    //created a new node
    Node* node1 = new Node(1);
    //cout << node1->data <<endl;
    //cout << node1->next <<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);

    // insertAtHead(head,12);
    // print(head);
    insertAtTail(tail,2);
    // print(head);

    // insertAtHead(head,15);
    // print(head);
    insertAtTail(tail,3);
    // print(head);
    insertAtTail(tail,4);
    // print(head);
    insertAtTail(tail,5);
    // print(head);
    insertAtTail(tail,6);
    // print(head);
    insertAtTail(tail,7);
    print(head);
    tail->next = head->next->next;

    // detectLoop(head);
    Node* startNode = getStartingNode(head);
    if(startNode != NULL){
        cout << "Starting node of loop is: " << startNode->data << endl;
    } else {
        cout << "No loop detected." << endl;
    }
    cout << "loop is present or not: " << floydDetectLoop(head) << endl;

    Node *loop = getStartingNode(head);
    cout << "Starting node of loop is: " << loop->data << endl;
    removeLoop(head);
    cout << "removing loop" << endl;

    print(head);

    // deleteNode(2,head);
    // print(head);

    // insertAtPosition(tail,head,4,35);
    // print(head);

    // insertAtPosition(tail,head,3,22);
    // print(head);
    

    // insertAtPosition(tail,head,1,9);
    // print(head);

    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
    
    return 0;
}