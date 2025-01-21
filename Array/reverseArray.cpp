//2-pointer approach
//for odd array reverse would be completed when - start==end
//for even array - start>end
//reverse completed when start>=end
//time-complexity - O(n)

#include<iostream>
using namespace std;

int reverseArr(int arr[], int size){

    int start = 0, end = size-1;

while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}
}

int main(){
 int arr[] = {2,4,9,1,0,8};
 int size = sizeof(arr)/sizeof(arr[0]); //can't be used in dynamic arrays

reverseArr(arr,size);

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}

return 0;
}
 