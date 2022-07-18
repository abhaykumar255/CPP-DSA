#include<bits/stdc++.h>
using namespace std;

struct Bstnode
{
    int data;
    Bstnode* right;
    Bstnode* left;
};

Bstnode* Getnode(int data){
    Bstnode* newnode=new Bstnode;
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode;
}

// retruning root address thats why we not uses void type
Bstnode* Insert(Bstnode* root,int data){
    if(root==NULL){
        root=Getnode(data);
        return root;        
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}
int findmin(Bstnode* root){
    if(root==NULL) {
        cout<<"Error";
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    return findmin(root->left);

    // for  iterative
    // while(root->left!=NULL){
    //     root=root->left;
    // }
    // return root->data;

}
int findmax(Bstnode* root){
    if(root==NULL){
        cout<<"error";
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;

}
int main(){
    // pointer to root node
    Bstnode* root=NULL; // create an empty tree
    root=Insert(root,15);
    root=Insert(root,5);
    root=Insert(root,10);
    root=Insert(root,4);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,25);
    if(findmax(root)){
        cout<<"Max is :- "<<findmax(root);
    }
    else{
        cout<<"Null Binary tree";
    }
}