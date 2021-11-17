//floor in bst
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

Node* floor(Node* root , int key){
    Node* res = NULL;
    while(root != NULL){
        if (key == root->data) return root;
        else if (key < root->data) {
            root = root->left;
        }
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main(){
    
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(30);

    Node* root1 = floor(root, 30);
    if (root1 != NULL)
      cout << root1->data << endl;
    else 
      cout << "NULL" << endl;  
    return 0;
}