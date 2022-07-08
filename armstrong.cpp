#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int org=n;
    while(n>0){
        int last=n%10;
        sum=last*last*last +sum;
        n=n/10;
    }
    if(org==sum){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
}