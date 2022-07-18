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
int height(Bstnode* node){
    if(node==NULL){
        return 0;
    }
    int lheigth=height(node->left);
    int rheigth=height(node->left);
    return max(lheigth,rheigth)+1;
}
int main(){
    // pointer to root node
    Bstnode* root=NULL; // create an empty tree
    root=Insert(root,15);
    root=Insert(root,5);
    root=Insert(root,3);
    root=Insert(root,2);
    root=Insert(root,10);
    root=Insert(root,4);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,25);
    root=Insert(root,30);
    cout<<"Heigth of tree is:- "<<height(root);
    
}