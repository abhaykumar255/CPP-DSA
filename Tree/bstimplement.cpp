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
bool Search(Bstnode* root,int data){
    if(root==NULL) return false;
    else if(data==root->data) return true;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
}
int main(){
    Bstnode* root=NULL;
    root=Insert(root,15);
    root=Insert(root,5);
    root=Insert(root,10);
    root=Insert(root,4);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,25);
    int number;
    cout<<"Enter an element to search :- ";
    cin>>number;
    if(Search(root,number)) cout<<"Element found";
    else cout<<"Element not found";
}


// void Insert(Bstnode** root,int data){
//     if(*root==NULL){
//         *root=Getnode(data);
//         return ;
//     }
// }
// int main(){
//     Bstnode* root=NULL;
//     Insert(&root,2);
//     Insert(&root,2);
//     Insert(&root,2);
//     Insert(&root,2);
//     Insert(&root,2);
// }
