//convert a Binary tree to BST
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

void InorderTree(Node* root , vector <int> &v){
    if (!root) return;
    InorderTree(root->left , v);
    v.push_back(root->data);
    InorderTree(root->right , v);
}

void InorderBST(Node* root , vector <int> v , int &i){
    if (!root) return;
    InorderBST(root->left , v , i);
    root->data = v[i];
    i++;
    InorderBST(root->right , v , i);
}

Node* binaryTreeToBST(Node* root){
    vector <int> v;
    InorderTree(root , v);
    sort(v.begin() , v.end());

    int i = 0;
    InorderBST(root , v ,i);
    return root;
}

void InorderPrint(Node* root){
    if (!root) return;
    InorderPrint(root->left);
    cout << root->data << " ";
    InorderPrint(root->right);
}

int main(){
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    //printing the binary tree
    InorderPrint(root);
    cout << endl;

    //conversion of bt to bst
    binaryTreeToBST(root);

    //printing the converted bst
    InorderPrint(root);
    cout << endl;
    return 0;
}