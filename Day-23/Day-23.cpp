/****
    Code Challenge
Day - 23
Convert an array to reduced form | Set 2 (using pair of vectors)
****/
/*
#include <bits/stdc++.h>
using namespace std;

void compression(int arr[], int n)
{
    vector <pair<int, int>> vec;
    
    for (int i = 0; i < n; i++)
    {
        vec.push_back(make_pair(arr[i], i));
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++)
    {
        arr[vec[i].second] = i;
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
}*/