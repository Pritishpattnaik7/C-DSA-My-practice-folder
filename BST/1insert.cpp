#include <bits/stdc++.h>
using namespace std;

class Node {
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

Node* insertBST(Node* root , int val){
    if (root == NULL){
        return new Node(val);
    }
    if (val < root->data){
        root->left = insertBST(root->left , val);
    }
    else{
        root->right = insertBST(root->right , val);
    }
    return root;
}

void preOrderPrint(Node* root){
    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

void inOrderPrint(Node* root){
    if (root == NULL){
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

int main(){
    Node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    
    inOrderPrint(root);
    return 0;
}