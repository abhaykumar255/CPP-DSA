#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
};
Node* Getnode(char data){
    Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node* Insert(Node* root, char data){
    if(root==NULL){
        root=Getnode(data);
        return root;
    }
    else if(data<=root->data) root->left= Insert(root->left,data);
    else root->right = Insert(root->right,data);
    return root;
}
void inorder(Node* root){
    
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void preorder(Node* root){
    
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(Node* root){
    
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
int main(){
    /*Code To Test the logic
	  Creating an example tree
	            F
          D             J
      B        E     G       K
    A    C             I

    */
    Node* root=NULL;
    root = Insert(root,'F'); 
    root = Insert(root,'D');
	root = Insert(root,'J'); 
    root = Insert(root,'B'); 
	root = Insert(root,'E'); 
    root = Insert(root,'G');
    root = Insert(root,'K');
    root = Insert(root,'I');
    root = Insert(root,'A');
    root = Insert(root,'C');
    cout<<"Inorder :- ";
    inorder(root);
    cout<<"\nPreorder :- ";
    preorder(root);
    cout<<"\nPostorder :- ";
    postorder(root);

}
