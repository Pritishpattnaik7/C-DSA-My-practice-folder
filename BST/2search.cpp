//search and deleter nodes in a binary search tree
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

Node* searchInBST(Node* root , int key){
    if (root == NULL){
        return NULL;
    }
    if (key == root->data){
        return root;
    }
    if (key < root->data){
        return searchInBST(root->left , key);
    }
    return searchInBST(root->right , key);
}



int main(){
    
    /* Binary search tree
       4
      / \
     2    5
    / \    \
   1   3    6
   
    */

    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if (searchInBST(root , 2) == NULL){
        cout << "key dosen't exists" << endl;
    }
    else{
        cout << "key exists" << endl;
    }

    return 0;
}