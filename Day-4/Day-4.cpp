/****
    Code Challenge
Day - 4
Sum of the array Problem and Application Find the missing number
****/
/*** Sum of the array elements ***/
/*
#include<bits/stdc++.h>
using namespace std;

int arr[1000*1000*100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    
    cout<<"Sum is: "<<sum;
    return 0;
}
*/

/*** Missing number ***/
/*
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int sum = N * (N + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        arrSum += A[i];
    }
    
    return sum - arrSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 5, arr[] = {1, 2, 4, 5};
    
    cout<<missingNumber(arr, N);
    return 0;
}
*/