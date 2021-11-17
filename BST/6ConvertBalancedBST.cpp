//Convert a normal BST to a balanced BST with min height
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

void InorderTree(Node* root , vector<int> &inorder){
    if (!root) return;
    InorderTree(root->left , inorder);
    inorder.push_back(root->data);
    InorderTree(root->right , inorder);
}

Node* solve(Node* root , vector<int> inorder , int start , int end){
    InorderTree(root , inorder);
    sort(inorder.begin() , inorder.end());

    start = 0;
    end = inorder.size();
    
    if (start > end) return NULL;
    int mid = (start + end)/2;
    root->data = inorder[mid];
    root->left = solve(root , inorder , start , mid-1);
    root->right = solve(root , inorder , mid+1 , end);

    return root;
}

int calcHeight(Node* root){
    if (!root) return 0;
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight , rHeight)+1;
}

int main(){
    
    Node* root = new Node(7);
    root->left = new Node(6);
    root->left->left = new Node(5);
    root->left->left->left = new Node(4);
    root->left->left->left->left = new Node(3);
    root->left->left->left->left->left = new Node(2);
    root->left->left->left->left->left->left = new Node(1);

    cout << "Height = " << calcHeight(root) << endl;
    return 0;
}