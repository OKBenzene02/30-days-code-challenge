/****
    Code Challenge
Day - 24
Kadane Algorithm 
 * References - https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
****/

///--- Kadane Algorithm (Maximum sum of contiguous elements) - Naive Approach ---///
/*
#include <bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n)
{
    int maxCurr = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        int maxSum = 0;
        for (int j = i; j < n; j++)
        {
            maxSum = maxSum + arr[j];
            
            if(maxCurr < maxSum)
            {
                maxCurr = maxSum;
            }
        }
    }
    
    return maxCurr;
}

int main()
{
    int A[] {-2, -3, 4, -1, -2, 1, 5, -3}, n = sizeof(A)/sizeof(A[0]);
    cout<<"Maximum sum of contiguous elements is "<<maxProduct(A, n)<<endl;
    return 0;
}
*/

///--- Kadane Algorithm (Maximum sum of contiguous elements) - Efficient Approach---///
/*
#include <bits/stdc++.h>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
    int maxSoFar = INT_MIN, maxRightNow = 0;
    
    for (int i = 0; i < n; i++)
    {
        maxRightNow = maxRightNow + arr[i];
        
        if (maxSoFar < maxRightNow)
        {
            maxSoFar = maxRightNow;
        }
        
        if (maxRightNow < 0)
        {
            maxRightNow = 0;
        }
        
    }
    
    return maxSoFar;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}, n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum of contiguous elements is "<<kadane(arr, n);
    return 0;
}*/