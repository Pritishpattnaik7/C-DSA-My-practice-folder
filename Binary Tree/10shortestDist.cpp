//Shortest distance between 2 nodes
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
    if (root == NULL)
      return NULL;
    if (root->data == n1 || root->data == n2)
      return root;
    Node* l = lca(root->left , n1 , n2);
    Node* r = lca(root->right , n1 , n2);
    if (l != NULL && r != NULL)
      return root;
    if (l != NULL)
      return l;
    else 
      return r;        

}

int main(){

    return 0;
}