/****
    Code Challenge
Day - 22
Convert an array to reduced form | Set 1 (Hashing)
****/
/*
#include <bits/stdc++.h>
using namespace std;

void compression(int arr[], int n)
{
    int temp[n];
    memcpy(temp, arr, n * sizeof(int));
    
    sort(temp, temp + n);
    
    unordered_map<int, int> map;
    
    int minCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        map[temp[i]] = minCount++;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = map[arr[i]];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 40, 20}, n = sizeof(arr)/sizeof(arr[0]);
    compression(arr, n);
    return 0;
}
*/