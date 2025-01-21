#include<iostream>
using namespace std;

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int size = 7;
//     int target;
//     cout<<"Enter your traget number: ";
//     cin>>target;
//     bool found = false;

//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             cout<<"Target found at index: "<<i<<endl;
//             found = true;
//             break;
//         }
//     }

//     if(!found){
//         cout<<"Target not found"<<endl;
//     }
// }

int linearSearch(int arr[], int size, int target){
 for(int i=0; i<size; i++){
    if(arr[i]==target){
        return i;
    }
 }

 return -1;
}

int main(){
     int arr[] = {4,2,7,8,1,2,5};
     int size = 7;
     int target;
     cout<<"Enter target number:";
     cin>>target;

     cout<<linearSearch(arr,size,target)<<endl;
     return 0;
}