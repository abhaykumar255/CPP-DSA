#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

int A[MAX_SIZE];
int top=-1;

void Push(int x){
    cout<<"Push\n";
    if(top==MAX_SIZE-1){
        cout<<"Stack overflow";
        return ;
    }
    // A[++top]=x;
    top=top+1;
    A[top]=x;
}
void Pop(){
    cout<<"Pop\n";
    if(top==-1){
        cout<<"Stack Empty";
        return;
    }
    top--;
}
int Top(){
    
    return A[top];
}
void Print(){
    int i;
    cout<<"Stack :- ";
    for (i = 0; i <= top; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    
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
    Top();
    Print();
    Push(8);
    Print();
    Pop();
    Print();

}