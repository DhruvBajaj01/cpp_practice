#include<iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode * left;
    BSTNode * right;
};

BSTNode * CreateNode(int value){
    BSTNode * newnode = new BSTNode();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;

}

BSTNode * insert(BSTNode* root, int value){
    if(root ==NULL){
        root = CreateNode(value);
        return root;
    }
    else if (value <=root->data){
        root->left = insert(root->left,value);

    }
    else {
        root->right = insert(root->right,value);
    }
    return root;
}

BSTNode* search(BSTNode *root, int val){
    if(root == NULL || root->data == val){
        return root;
    }
    if(root->data<val){
        return search(root->left,val);
    }
    else{
        return search(root->right, val);
    }
}

void Inorder(BSTNode* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main(){
    BSTNode * root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);


    
    Inorder(root);

    return 0;
}