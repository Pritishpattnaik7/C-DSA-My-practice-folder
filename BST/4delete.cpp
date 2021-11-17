//delete in BST
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }  
};

Node* inSuc(Node* root){
    Node* p = root->right;
    while (root->left) p = p->left;
    return p;
    
}

Node* deleteBST(Node* &root, int key){
    if (!root) return NULL;
    if (key < root->data) root->left = deleteBST(root->left, key);
    else if (key > root->data) root->right = deleteBST(root->right, key);
    else{
        if (!root->left){
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else if (!root->right){
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        else {
            Node* temp = inSuc(root);
            swap(root->data , temp->data);
            root->right = deleteBST(root->right , key);
        }
    }
    return root;
}

void inorderPrint(Node* root){
    if (root == NULL) {
       return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main(){
    
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->right = new Node(7);

    inorderPrint(root);
    cout << endl;

    //detetion
    root = deleteBST(root, 5);
    
    //print tree(inorder)
    inorderPrint(root);
    return 0;
}