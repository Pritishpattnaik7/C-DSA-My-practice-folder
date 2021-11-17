//kth largest element in a BST
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

int ans = 0;

void solve(Node* root , int k , int &ctr){
    if (!root) return;
    solve(root->right , k , ctr);
    if (k == ctr){
        ans = root->data;
        ctr++;
        return;
    }
    else ctr++;
    solve(root->left , k , ctr);
}

int kthLargestElement(Node* root , int k){
    int ctr = 1;
    ans = -1;
    solve(root , k , ctr);
    return ans;
}

int32_t main() {

    Node* root = new Node(40);
    root->left = new Node(20);
    root->right = new Node(60);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(50);
    root->right->right = new Node(70);

    int ans = kthLargestElement(root, 3);
    cout << ans << "\n";
     int ans1 = kthLargestElement(root , 2);
     cout << ans1;
    return 0;
}