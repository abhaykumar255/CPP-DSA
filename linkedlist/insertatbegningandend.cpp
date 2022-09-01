#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head;
Node* GetNode(int x){
    Node* newNode= new Node;
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void InsertatHead(int x){
    Node* temp=GetNode(x);
    
}
int main(){
    head=NULL;
}
