/****
    Code Challenge
Day - 10
Merge sort and Quick sort with execution time. (Practice)
****/

///--- Merge sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void merge(int arr[],int low, int mid, int high)
{
    int i, j, k;
    int leftSize = mid - low + 1, rightSize = high - mid;
    int L[leftSize], R[rightSize];

    for (i = 0; i < leftSize; i++)
    {
        L[i] = arr[low + i];
    }

    for (j = 0; j < rightSize; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i=0;
    j=0;
    k=low;

    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    mergeSort(arr, 0, n - 1);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/

///--- Quick sort ---///
/*
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[1000*1000*100];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lo, int hi)
{
    int pivot = arr[lo], i = lo, j = hi;
    while(i < j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[lo], &arr[j]);

    return j;
}

void quickSort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int j = partition(arr, lo, hi);
        quickSort(arr, lo, j);
        quickSort(arr, j + 1, hi);
    }

}

int main()
{
    int n;
    cout<<"enter the array size: "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % n);
    }
    
//    cout<<"Unsorted array: ";
//    for (int i = 0; i < n; i++){
//        cout<<" "<<arr[i];
//    }
    
    clock_t start = clock();
    
    quickSort(arr, 0, n);
    
    cout<<"\nSorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]
    }
    
    clock_t end = clock() - start;
    
    double elap = double(end)/CLOCKS_PER_SEC;
    cout<<"\nMeasured time: "<<elap<<endl;
    
    
    return 0;
}
*/