/****
    Code Challenge
Day - 5
Missing number using XOR method and Maximum and minimum in an array
****/

/**** Missing number using XOR method****/
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5] = {1, 2, 4, 5, 6};
    int x1 = arr[0]; // we are starting with the first element 
    int x2 = 1; // initializing x2 as 1 because it is the array of elements which all the elements are present
    
    for (int i = 1; i < 5-1; i++)
    {
        x1 = x1 ^ arr[i];
    }
    
    for (int i = 2; i < 5 + 1; i++)
    {
        x2 = x2 ^ i;
    }
    
    cout<<"Missing number is: "<<(x1 ^ x2);
    
    return 0;
}
*/

/*** Minimum and maximum in an array ***/ 
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair min_max(int arr[], int n)
{
    struct Pair storage;
    if (n == 1)
    {
        storage.max = arr[0];
        storage.min = arr[0];
        return storage;
    }
    else if (arr[0] > arr[1])
    {
        storage.max = arr[0];
        storage.min = arr[1];
    }
    else{
        storage.max = arr[1];
        storage.min = arr[0];
    }
    
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > storage.max)
        {
            storage.max = arr[i];
        }
        else if (arr[i] < storage.min){
            storage.min = arr[i];
        }
    }
    
    return storage;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[] ={ 1000, 11, 445, 1, 330, 3000 }, n = sizeof(array)/sizeof(array[0]);
    struct Pair result = min_max(array, n);
    
    cout<<"The maximum element is: "<<result.max<<endl;
    cout<<"The minimum element is: "<<result.min<<endl;

    return 0;
}
*/