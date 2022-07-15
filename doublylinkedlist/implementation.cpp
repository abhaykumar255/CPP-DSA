#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};
Node* head;

Node* GetnewNode(int x){
    Node* newNode = new Node;
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;

}
void InsertatHead(int x){
    Node* newNode=GetnewNode(x);
    if(head==NULL){
        head=newNode;
        return ;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;

}
void InsertatEnd(int x){
    Node* newNode=GetnewNode(x);
    // if(head==NULL){
    //     head=newNode;
    //     return;
    // }
    Node* traverse=head;
    while(traverse->next!=NULL){
        traverse=traverse->next;
    }
    traverse->next=newNode;
    newNode->prev=traverse;

}
void Print(){
    Node* temp=head;
    cout<<"Forwarding :- "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";

}
void ReversePrint(){
    Node* temp=head;
    if(temp==NULL) return; // empty
    // going to last node
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // traverse backward  using prev
    cout<<"Reverse :- "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->prev;
    }
    cout<<"NULL"<<"\n";

}

int main(){
    head=NULL;
    InsertatHead(5);
    InsertatEnd(600);
    Print();
    ReversePrint();
    InsertatHead(15);
    InsertatEnd(100);
    Print();
    ReversePrint();
    InsertatHead(52);
    InsertatEnd(200);
    Print();
    ReversePrint();
    InsertatHead(2);
    InsertatEnd(500);
    Print();
    ReversePrint();
}