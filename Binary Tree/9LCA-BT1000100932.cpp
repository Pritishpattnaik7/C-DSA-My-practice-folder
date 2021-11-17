//lowest common ancestor
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

Node* lca(Node* root , int n1 , int n2){
    if (root == NULL){
        return NULL;
    }
    if (root->data == n1 || root->data == n2){
        return root;
    }
    Node* l = lca(root->left , n1 , n2);
    Node* r = lca(root->right , n1 , n2);
    if (l != NULL && r != NULL){
        return root;
    }
    if (l != NULL)
      return l;
    else 
      return r;  
}

int main()
{
    /*
       1
      / \
     2    3
    / \  /  \
   4   5 6   7
   
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //lca
    Node* root1 = lca(root,4,5);
    cout << "LCA = " << root1->data << "\n";
    return 0;
}