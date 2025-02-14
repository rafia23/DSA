#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

int binarySearch(vector<int>&arr, int tar, int st, int end)
{ // arr is passed by value, meaning a copy of the vector is created every time the function is called recursively. so we use &arr
    if(st<=end){
        int mid = st+(end-st)/2;

        if(tar > arr[mid])
        { 
            return binarySearch(arr,tar,mid+1,end);
        }

        else if (tar < arr[mid])
        {
            return binarySearch(arr,tar,st,mid-1);
        } else {
            return mid;
        }
        
    }
    return -1;
}
int main()
{

    vector<int> arr1 = {3, 4, 5, 2, 9, 1}; // even
    int tar1 = 4;

    int result = binarySearch(arr1, tar1, 0, arr1.size() - 1);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
    return 0;
}