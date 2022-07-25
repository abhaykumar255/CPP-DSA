#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int len){
    for(int i=0;i<len-1;i++){
        int iMin=i;
        for (int j = i+1; j < len; j++)
        {
            if(a[j]<a[iMin]) iMin=j;
        }
        int temp=a[i];
        a[i]=a[iMin];
        a[iMin]=temp;
    }
}

int main(){
    int arr[]={2,7,4,1,5,3,10,9};
    int n=sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
