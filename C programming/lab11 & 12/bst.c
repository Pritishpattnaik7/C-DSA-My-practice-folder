#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *left;
    struct node *right;
};

struct node* createNode(int x){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preorder(struct node* root){
    if (root == NULL) return;
    printf("%d ", root->info);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->info);
}

void inorder(struct node* root){
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->info);
    inorder(root->right);
}

struct node* insertNode(struct node* root, int x){
    if (root == NULL){
        return createNode(x);
    }
    else if (x < root->info){
        root->left = insertNode(root->left, x);
    }
    else if (x > root->info){
        root->right = insertNode(root->right, x);
    }
    return root;
}

struct node* searchNode(struct node* root, int key){
    if (root == NULL){
        return NULL;
    }
    else if (key < root->info){
        return searchNode(root->left, key);
    }
    else if (key > root->info){
        return searchNode(root->right, key);
    }
    else return root;
}

int main(){
    struct node *root = createNode(48);
    //insertion 
    insertNode(root, 30);
    insertNode(root, 65);
    insertNode(root, 20);
    insertNode(root, 36);
    insertNode(root, 56);
    insertNode(root, 70);
    insertNode(root, 8);
    insertNode(root, 28);
    insertNode(root, 32);
    insertNode(root, 68);
    insertNode(root, 85);
   

    //traverals
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");


    //searching
    int key;
    scanf("%d", &key);
    struct node* ptr = searchNode(root, key);
    if (ptr == NULL){
        printf("key NOT present!\n");
    }
    else {
        printf("key present\n");
    }
    return 0;
}