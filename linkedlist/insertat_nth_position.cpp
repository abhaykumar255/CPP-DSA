#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
    Node* next;
};
Node* head;

void Insert(int data , int position){
    Node* temp = new Node;
    temp->data=data;
    temp->next=NULL;

    if(position==1){
        temp->next=head;
        head=temp;
        return ;
    }
    Node* temp2=head;
    for(int i=0;i<position-2;i++){ // position-2 to reach to the postion of insert at position-1
        temp2=temp2->next;// temp is pointing to n-1th position
    }
    temp->next=temp2->next;
    temp2->next=temp;

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
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
}