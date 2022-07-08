#include <iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter character"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Abhay"<<endl;
        break;
    case 'c':
        cout<<"Chao"<<endl;
        break;
    case 'd':
        cout<<"Yoo"<<endl;
        break;
    
    
    default:
    cout<<"not found";
        break;
    }

    return 0;
}