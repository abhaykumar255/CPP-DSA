#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;

void enqueue(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue(){
    Node* temp=front;
    if(front==NULL) return ;
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
}
void Print(){
    Node* temp=front;
    if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<"Queue elements are: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    enqueue(5);
    Print();
    enqueue(10);
    Print();
    enqueue(8);
    Print();
    dequeue();
    Print();


}