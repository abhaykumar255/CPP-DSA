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
bool issublefttreee(Node* root, char value){
    if (root==NULL) return true;
    if ( root->data<=value && issublefttreee(root->left,value) && issublefttreee(root->left,value) ){
        return true;
    }
    else {
        return false;
    }
}
bool issubrighttreee(Node* root, char value){
    if(root==NULL) return true;
    if(root->data>=value && issubrighttreee(root->left, value) && issubrighttreee(root->right,value) ){
        return true;
    }
    else {
        return false;
    }

}
bool isbinarysearchtree(Node* root){
    if(root==NULL) return true;
    if( issublefttreee(root->left,root->data) && issubrighttreee(root->right,root->data) && isbinarysearchtree(root->left) && isbinarysearchtree(root->right) ){
        return true;
    }
    else{
        return false;
    }
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
    if(isbinarysearchtree(root)){
        cout<<"tree is binary search tree";
    }
    else {
        cout<<"tree is not BST";
    }
}
