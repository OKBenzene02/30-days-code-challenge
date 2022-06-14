/****
    Code Challenge
Day - 6
Maximum and minimum in an array using Tournament method and Prefix sum array 
****/


/**** Minimum and Maximum element using Tournament method ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Pair {
  int max;
int min;  
};

struct Pair Min_Max(int arr[], int low, int high)
{
    struct Pair storage, left, right;
    int mid;
    if (low == high)
    {
        storage.max = arr[low];
        storage.min = arr[low];
        return storage;
    }
    
    if(high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            storage.max = arr[low];
            storage.min = arr[high];
        }
        else{
            storage.min = arr[low];
            storage.max = arr[high];
        }
        return storage;
    }
    
    mid = low + (high - low)/2;
    left = Min_Max(arr, low, mid);
    right = Min_Max(arr, mid+1, high);
    
    if (left.min > right.min)
    {
        storage.min = right.min;
    }
    else{
        storage.min = left.min;
    }
    
    if (left.max > right.max)
    {
        storage.max = left.max;
    }
    
    else{
        storage.max = right.max;
    }
    
    return storage;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[] ={12, 34}, n = sizeof(array)/sizeof(array[0]);
    struct Pair result = Min_Max(array, 0, n - 1);
    
    cout<<"The maximum element is: "<<result.max<<endl;
    cout<<"The minimum element is: "<<result.min<<endl;

    return 0;
}
*/