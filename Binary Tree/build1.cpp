//Build Tree Preorder and Inorder
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

int Search(int inorder[] , int start , int end , int curr){
    for (int i=start ; i<=end ; i++){
        if (inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* BuildTree(int preorder[] , int inorder[] , int start , int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node* root = new Node(curr);
    if (start == end){
        return root;
    }
    int pos = Search(inorder , start , end , curr);
    root->left = BuildTree(preorder , inorder , start , pos-1);
    root->right = BuildTree(preorder , inorder , pos+1 , end);

    return root;
}

void InorderPrint(Node* root){
    if (root == NULL){
        return;
    }
    InorderPrint(root->left);
    cout << root->data << " ";
    InorderPrint(root->right);
}

int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    Node* root = BuildTree(preorder , inorder , 0 , 4);
    InorderPrint(root);
    return 0;
}