#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void Insert(int number){
    Node* temp=new Node;
    temp->data=number;
    temp->next=head;
    //temp->next=NULL;
    //if(head!=NULL) temp->next=head;
    head=temp;
}
void Print(){
    Node* temp = head;
    cout<<"List is :- "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    
    cout<<"NULL"<<"\n";
}
int main(){
    head=NULL;
    cout<<"Enter no of elements"<<endl;
    int x,number,i;
    cin>>x; 
    for(i=0;i<x;i++){
        cout<<"Enter number"<<endl;
        cin>>number;
        Insert(number);
        
    }
    Print();

}