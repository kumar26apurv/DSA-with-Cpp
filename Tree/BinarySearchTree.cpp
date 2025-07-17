#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp=q.front();
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

Node* deleteFromBST(Node* root, int val)
{
    ///base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 Child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 Child
        // LEFT CHILD
        if(root->left!=NULL && root->right==NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        //RIGHT CHILD
        if(root->left==NULL && root->right!=NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        //2 Child
        if(root->left!=NULL && root->right!=NULL)
        {
            int min = minValue(root->right)->data;
            root->data = min;

            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if(root->data>val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

Node* insertToBST(Node* &root, int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root->right = insertToBST(root->right, d);
    }
    else{
        root->left = insertToBST(root->left, d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data!=-1){
        root = insertToBST(root, data);
        cin >> data;
    }
}

int main(){
    Node *root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);
    levelOrderTraversal(root);
    return 0;
}