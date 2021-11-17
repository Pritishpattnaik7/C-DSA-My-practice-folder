#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void Preorder(struct node* root){
    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct node* root){
    if (root == NULL){
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Postorder(struct node* root){
     if (root == NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
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

    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    //Preorder(root);                           //o/p-> 1 2 4 5 3 6 7

    //Inorder(root);                            //o/p-> 4 2 5 1 6 3 7

    Postorder(root);
    return 0;
}