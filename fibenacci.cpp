#include<bits/stdc++.h>
using namespace std;

void fibenacci(int m){
    int t1=0;
    int t2=1;
    int nextterm;
    for (int i=1;i<=m;i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }

}

int main(){
    int n;
    cin>>n;

    fibenacci(n);

    return 0;
}