#include<iostream>
#include <climits> // Include this for INT_MIN and INT_MAX
using namespace std;

int main(){
    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int  smallestIndex = -1;
    int largestIndex = -1;

    // for(int i=0; i<size; i++){
    //     smallest = min(nums[i],smallest);
    //     largest = max(nums[i],largest);
    // }

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
            smallestIndex = i;
        }  if(nums[i] > largest){
            largest = nums[i];
            largestIndex = i; 
        }
    }

    cout<< "smallest number "<<smallest<<" at index: "<<smallestIndex<<endl;
     cout<< "largest number "<<largest<<" at index: "<<largestIndex<<endl;

    return 0;
}