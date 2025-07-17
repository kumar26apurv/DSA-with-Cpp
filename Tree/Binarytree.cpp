#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data=d;
        this -> left=NULL;
        this -> right=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter data for inserting in root "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data inserting at left "<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data inserting at right "<<endl;
    root->right=buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            //purana level traverse complete ho chuka ha
            cout<<endl;
            if(!q.empty())//means q has some child
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrder(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    stack<node*> s;  // Use a stack to reverse the order

    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        s.push(temp); // Push each node onto the stack

        // Note the order:  right child first, then left.  This is crucial for reverse level order.
        if (temp->right) {
            q.push(temp->right);
        }
        if (temp->left) {
            q.push(temp->left);
        }
    }

    cout << "Reverse Level Order Traversal: " << endl;
    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
    cout << endl;
}

void inorder(node* root)
{
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;

    //creating a tree
    root=buildTree(root);

    //leeveloftraversal
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);

    reverseLevelOrder(root);

    cout<<"inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal "<<endl;
    postorder(root);
    return 0;
}