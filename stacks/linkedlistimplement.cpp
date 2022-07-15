#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* top= NULL;

void Push(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->next=top;
    top=temp;
}

void Pop(){
    if(top==NULL) return ;
    Node* temp;
    temp=top;
    top=temp->next;
    delete temp;
}

void Print(){
    Node* p=top;
    if(p==NULL) return ;
    p=p->next;
    Print();
    cout<<p->data<<" ";
}

int main(){
    Push(5);
    Print();
    Push(55);
    Print();
    Push(2);
    Print();
    Pop();
    Print();
    Push(25);
    Print();
    Push(8);
    Print();
    Pop();
    Print();

}