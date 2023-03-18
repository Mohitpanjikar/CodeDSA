#include <bits/stdc++.h>
using namespace std;

//creating an object class for binary tree root node and left/right-
class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
//creating a function for binary tree -
node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }
    
    //using recurision we are making call and inserting values -
    cout<<"Enter data for inserting in left of"<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

//level order traversal print -

// inorder traversal LNR -
void inorder(node* root){
    //base case -
    if(root == NULL){
        return ;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// preorder traversal NLR -
void preorder(node* root){
    //base case -
    if(root == NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//post order traversal LRN -
void postorder(node* root){
    //base case -
    if(root == NULL){
        return ;
    }
  
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    
    node* root = NULL;
    
    //creating a Tree -
    root = buildTree(root);
    
    //printing inorder traversal
    cout<<"printing inorder traversal: ";
    inorder(root);
    cout<<endl;
    
    cout<<"printing preorder traversal: ";
    preorder(root);
    cout<<endl;
    
    cout<<"printing postorder traversal: ";
    postorder(root);
    cout<<endl;
    
    return 0;
}