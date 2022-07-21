#include<bits/stdc++.h>
using namespace std;
 struct Node{
    int data;
    Node* right;
    Node* left;
 };

 Node* Getnode(int data){
    Node* newnode=new Node;
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
 }

 Node* Insert(Node* root ,int value){
    if(root==NULL){
        root=Getnode(value);
        return root;
    }
    else if(value<=root->data){
        root->left=Insert(root->left,value);
    }
    else{
        root->right=Insert(root->right,value);
    }
    return root;
 }
Node* findmin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
void Inorder(Node* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
 Node* Delete(Node* root,int data){
    if(root==NULL) return root;
    else if(data < root->data) root->left=Delete(root->left,data);
    else if(data > root->data) root->right=Delete(root->right,data);
    else{
        // when node found
        // Case 1: no child
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }

        // Case 2: one child
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
        }

        // Case 3: two child
        else{
            Node* temp=findmin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
 }

 int main(){
    Node* root=NULL;
    root=Insert(root,15);
    root=Insert(root,5);
    root=Insert(root,17);
    root=Insert(root,3);
    root=Insert(root,7);
    root=Insert(root,1);
    root=Insert(root,9);
    root=Insert(root,16);
    root=Insert(root,18);

    cout<<"Inorder :- ";
    Inorder(root);
    cout<<"\n";

    root=Delete(root,17);

    cout<<"Inorder :- ";
    Inorder(root);
    cout<<"\n";
 }