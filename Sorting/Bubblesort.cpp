#include<bits/stdc++.h>
using namespace std;


void Bubblesort(int a[], int n){
    
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-k-1;i++){
            if(a[i]>a[i+1]){
                
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

}
int main(){
    int arr[]={2,7,4,1,5,3};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;

}