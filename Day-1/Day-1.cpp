/****
    Code Challenge
Day - 1 
Reverse an array and application
****/

/** Reverse an array problem**/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, T;
    
//    cout<<"Enter number of test cases: "<<endl;
    cin>>T;
    
    for (int i = 0; i < T; i++)
    {
//        cout<<"Enter the size of the array: "<<endl;
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = N - 1; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/**** Reversed Array with Square of the numbers ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int sumArr[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N, sum = 0;
    cout<<"enter the test cases: "<<endl;
    cin>>T;
    for (int j = 0; j < T; j++)
    {
        cout<<"enter the size of the array: "<<endl;
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        sum = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if (N % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    sum += arr[i] * arr[i];
                }
                else
                {
                    sum -= arr[i] * arr[i];
                }
                
            }
            else{
                if (i % 2 != 0)
                {
                    sum -= arr[i] * arr[i];
                }
                else
                {
                    sum += arr[i] * arr[i];
                }
            }
        }
        
        sumArr[j] = sum;    
    }
    
    for (int i = 0; i < T; i++)
    {
        cout<<sumArr[i]<<endl;
    }
    
    
    return 0;
}
*/