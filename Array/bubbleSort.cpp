#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool isSwap = false; //to check if array is already sorted or not
       for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
       }
       if(!isSwap){
        return; //means no swapping occured so array is sorted. Also return an integer value if return type is int.
       }
}

void printArray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
   int n = 5;
   int arr[] = {4,1,5,2,3};

   bubbleSort(arr,n); // g++ -o main bubbleSort.cpp
   printArray(arr,n);
   return 0;
}