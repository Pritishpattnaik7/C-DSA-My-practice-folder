//deletion in a BST
#include<stdio.h>
#include<stdlib.h>

struct node{
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

void preorderPrint(struct node *root){
    if (root == NULL) return;
    printf("%d ", root->info);
    preorderPrint(root->left);
    preorderPrint(root->right);
}

//deletion cases
//case a (node to be deleted is a leaf node)
struct node* case_a(struct node* root, struct node* par, struct node* ptr){
    if (par == NULL){
        root = NULL;
    }
    else if (ptr == par->left){
        par->left = ptr->left;
    }
    else {
        par->right = ptr->right;
    }
    free(ptr);
    return root;
}

//case b (node to be deleted has one child)
struct node* case_b(struct node* root, struct node* par, struct node* ptr){
    struct node* child;
    if (ptr->left != NULL){
        child = ptr->left;
    }
    else if (ptr->right != NULL){
        child = ptr->right;
    }

    if (par == NULL){
        root = child;
    }
    else if (ptr == par->left){
        par->left = child;
    }
    else {
        par->right = child;
    }
    free(ptr);
    return root;
}

//case c (node to be deleted has 2 children)
struct node* case_c(struct node* root, struct node* par, struct node* ptr){
    struct node *succ, *par_succ;
    par_succ = ptr;
    succ = ptr->right;

    //finding the inorder successor
    while (succ->left != NULL){
        par_succ = succ;
        succ = succ->left;
    }

    //copying the value of ios to ptr
    ptr->info = succ->info;

    //deleting the successor node
    if (succ->left == NULL && succ->right == NULL){
        root = case_a(root, par_succ, succ);
    }
    else {
        root = case_b(root, par_succ, succ);
    }
    return root;
}

struct node* deleteNode(struct node* root, int dkey){
    struct node *par, *ptr;
    ptr = root;
    par = NULL;
    while (ptr != NULL){
        if (dkey == ptr->info)
          break;
        //update parent
        par = ptr;
        if (dkey < ptr->info){
            ptr = ptr->left;
        }  
        else{
            ptr = ptr->right;
        }
    }
    if (ptr == NULL){
        printf("dkey is not present\n");
    }

    //node as 2 child
    else if (ptr->left != NULL && ptr->right != NULL){
        root = case_c(root, par, ptr);
    }
    //node has 1 children
    else if (ptr->left != NULL || ptr->right != NULL){
        root = case_b(root, par, ptr);
    }
    //node has no children
    else {
        root = case_a(root, par, ptr);
    }
    return root;
}

int main(){
    struct node* root = createNode(67);
    insertNode(root, 34);
    insertNode(root, 81);
    insertNode(root, 12);
    insertNode(root, 45);
    insertNode(root, 78);
    insertNode(root, 95);
    insertNode(root, 89);
    insertNode(root, 98);

    //before deletion
    //preorder : 67 34 12 45 81 78 95 89 98
    preorderPrint(root);
    printf("\n");

    //delete fun
    //preorder o/p after detetion : 67 34 12 45 89 78 95 98
    deleteNode(root, 81);
    preorderPrint(root);
    printf("\n");
    return 0;
}