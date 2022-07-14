#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;

void Insert(int data){
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return ;
    }
    Node* traverse=head;
    while (traverse->next!=NULL)
    {
        traverse=traverse->next;
    }
    traverse->next=temp;
}
void Print(Node* p){
    if(p==NULL) return ;
    //Print(p->next);
    cout<<p->data<<" ";
    Print(p->next);
}
int main(){
    head=NULL;
    Insert(2);
    Insert(5);
    Insert(12);
    Insert(29);
    Insert(10);
    Print(head);
}