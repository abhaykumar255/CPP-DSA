#include<bits/stdc++.h>
using namespace std ;

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
        //temp->next=NULL;
        head=temp;
        return ;
    }
    Node* traverse= head;
    while(traverse->next!=NULL){
        traverse=traverse->next;
        
    }
    traverse->next=temp;
    //temp->next=NULL;

}
void Print(){
    Node* temp=head;
    cout<<"List is :- "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
    
}
int main(){
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(8);
    Insert(6);
    Print();

}