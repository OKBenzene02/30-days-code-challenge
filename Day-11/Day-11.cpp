/****
    Code Challenge
Day - 11
Binary search and Heap sort. (Practice)
****/

///--- Binary Search ---///
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int BinarySearch(int arr[], int ele, int low, int high)
{
     if (low <= high)
    {
        int mid;
        mid = low + (high - low)/2;
        if (arr[mid] > ele)
        {
            return BinarySearch(arr, ele, low, mid - 1);
        }
        else if (arr[mid] < ele)
        {
            return BinarySearch(arr, ele, mid + 1, high);
        }
        return mid;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int array[] = {12, 23, 34, 45, 56, 67, 78};
    int n = sizeof(array)/sizeof(array[0]), ele, result;
    cout<<"Enter the element to search: ";
    cin>>ele;
    result = BinarySearch(array, ele, 0, n-1);
    (result == -1) ? cout<<"\nElement is not found.\n" : cout<<"\nElement found at position: "<<result;
    return 0;
}
*/

///--- Heap sort ---///
/*
#include<bits/stdc++.h>

void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int array[] = {82,90,10,12,15,77,55,23}, n = sizeof(array)/sizeof(array[0]);

    heapSort(array, n);
    cout<<"The sorted array is "<<endl;
    display(array, n);
    return 0;
}
*/