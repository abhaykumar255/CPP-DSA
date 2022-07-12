#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void Insertp(int data, int pos){
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
        return ;
    }
    Node* temp1=head;
    for(int i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;

}
void Delete(int position){
    Node* temp= head;
    if(position==1){
        head=temp->next;
        delete temp;
        return ;
    }
    for(int i=0;i<position-2;i++){
        temp=temp->next;
    }
    Node* temp2=temp->next;
    temp->next=temp2->next;
    delete temp2;

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
    Insertp(2,1);
    Insertp(3,2);
    Insertp(4,1);
    Insertp(5,2);
    Print();
    int n;
    cout<<"Enter position"<<endl;
    cin>>n;
    Delete(n);
    Print();

}