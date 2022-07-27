#include<bits/stdc++.h>
using namespace std;

// sirting the element according to pivot 
int Partition(int *A, int start, int end){
    int pivot=A[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(A[i]<=pivot){
            int temp=A[i];
            A[i]=A[pIndex];
            A[pIndex]=temp;
            pIndex++;
        }
    }
    int temp=A[pIndex];
    A[pIndex]=A[end];
    A[end]=temp;
    return pIndex;
}
void Quicksort(int *A, int start, int end){
    if(start<end){
        int pIndex=Partition(A,start,end);
        Quicksort(A,start,pIndex-1);
        Quicksort(A,pIndex+1,end);
    }
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main(){
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size);
    
    Quicksort(arr,0,size-1);
    cout<<"\n";
    printArray(arr,size);

}