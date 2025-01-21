//to calculate sum & product of all numbers in an array
#include<iostream>
using namespace std;

int sumProduct(int arr[], int size){
    int sum=0, prod=1;
    for(int i=0; i<size; i++){
       sum = sum+arr[i];
       prod = prod*arr[i];
}
cout<<"Total sum: "<<sum<<endl;
cout<<"Total product: "<<prod<<endl;
}

int main(){
    const int size = 6; //without using const, it'd show error
    int arr[size];
   // int arr[size]; - if we want to take size as an input, it won't work as C++ does not support variable-length arrays. The size of the array must be a constant expression (known at compile time).
   //need to use Use  vector<int> arr(size) for dynamic sizing.
    cout<<"Enter array elements:"<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    sumProduct(arr,size);
    return 0;
}