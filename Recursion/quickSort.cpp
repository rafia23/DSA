#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int i = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot) //for descending order the sign would be reversed
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[end], arr[i]); // won't work as pivot is just a copy of arr[end], not a reference to the actual array element.
    return i;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr,st,end);

        quickSort(arr,st,pivIdx-1); //left half
        quickSort(arr,pivIdx+1,end); //right half
    }
}

int main(){
    vector<int>arr = {12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr){ //for each loop
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}