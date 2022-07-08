#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    // int sum =0;

    // for (int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<"Sum is "<<sum;

    // return 0;
    // for prime numeber
    int i;
    for (i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"Prime";

}