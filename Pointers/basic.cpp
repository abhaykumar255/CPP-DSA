#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    int *p;// pointer to a variable
    p=&a; // &a gives tha address of variable a to pointer p
    cout<<p<<endl; // print the address of a
    cout<<&a<<endl; // prints the address of a
    cout<<&p<<endl; // print the address of p variable
    cout<<*p<<endl; // print the value 5 (acts as de-refrencing)

    *p= 8; // change the value of a by 8
    cout<<a<<endl;

    cout<<p+1<<endl; // prints the address of a by +4 
    cout<<*(p+1)<<endl; // returns garbage value as we have not assign any value to it
    
}