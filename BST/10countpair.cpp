//Count the pairs from 2 bst whose sum is equal to the given value x
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;
    Node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }  
};

int ctr = 0;

bool fetch(Node* root2 , int k){
    if (!root2) return false;
    if (k == root2->data) return true;
    bool x , y;
    x = false;
    y = false;
    if (k < root2->data)
      x = fetch(root2->left , k);
    else if (k > root2->data)
      y = fetch(root2->right , k);

    return x || y;    
}

void solve(Node* root1 , Node* root2 , int x){
    if (!root1) return;
    solve(root1->left , root2 , x);
    if (fetch(root2 , x-root1->data)) ctr++;
    solve(root1->right , root2 , x);
}

int countNode(Node* root1, Node* root2, int x){
    ctr = 0;
    solve(root1 , root2 , x);
    return ctr;
}

int main() {
    
    Node* root1 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(7);
    root1->left->left = new Node(2);
    root1->left->right = new Node(4);
    root1->right->left = new Node(6);
    root1->right->right = new Node(8);

   Node* root2 = new Node(10);
    root2->left = new Node(6);
    root2->right = new Node(15);
    root2->left->left = new Node(3);
    root2->left->right = new Node(8);
    root2->right->left = new Node(11);
    root2->right->right = new Node(18);

    int countnode = countNode(root1 , root2 , 16);
    cout << countnode << "\n";
 
    return 0;
}