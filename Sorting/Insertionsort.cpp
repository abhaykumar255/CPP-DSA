#include<bits/stdc++.h>
using namespace std;


void Insertionsort(int a[], int n){
    
    for(int i=1;i<n-1;i++){
        int value=a[i];
        int hole=i;
        while(hole>0 && a[hole-1]>value){
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;

    }

}
int main(){
    int arr[]={2,7,4,1,5,3};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}