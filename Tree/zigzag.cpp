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
void levelorder(Node* root){
    if(root==NULL) return ;
    queue<Node*> q;
    q.push(root);
    int level=0;
    while(!q.empty()){
        Node* curr=q.front();
        cout<<curr->data<<" ";
        if(level%2 !=0){
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);  
        }
        else{
        if(curr->right!=NULL) q.push(curr->right);
        if(curr->left!=NULL) q.push(curr->left);
        }
        level=+1;
        q.pop();
    }
}
int main(){
    /*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
    Node* root=NULL;
    root = Insert(root,'M'); 
    root = Insert(root,'B');
	root = Insert(root,'Q'); 
    root = Insert(root,'Z'); 
	root = Insert(root,'A'); 
    root = Insert(root,'C');
   // root = Insert(root,'P');
    levelorder(root);
}
