//finding inorder predecessor and successor in a BST
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

Node* inPre(Node* root){
    Node* p = root->left;
    while(p->right) p = p->right;
    return p;
}

Node* inSuc(Node* root){
    Node* p = root->right;
    while(p->left) p = p->left;
    return p;
}

void findPreSuc(Node* root , Node* pre , Node* suc , int key){
    if (root != NULL) return;
    if (root->data == key){
        if (root->left != NULL) 
          pre = inPre(root);
        else if (root->right != NULL)
          suc = inSuc(root);
      return;      
    }
    if (key < root->data){
        suc = root;
        findPreSuc(root->left , pre , suc , key);
    }
    else if (key > root->data){
        pre = root;
        findPreSuc(root->right , pre , suc , key);
    }
}


int main(){
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return 0;
}