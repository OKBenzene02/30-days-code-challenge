/****
    Code Challenge
Day - 20
2D Prefix sum.
 * Reference- https://www.geeksforgeeks.org/prefix-sum-2d-array/
****/

///---- 2D Prefix sum ---///
/*
#include <bits/stdc++.h>
using namespace std;

void prefixSum(int a[][3], int n)
{
    int psa[n][3];
    
    psa[0][0] = a[0][0];
    
    for (int j = 1; j < n; j++)
    {
        psa[0][j] = psa[0][j - 1] + a[0][j];
    }
    
    for (int i = 1; i < n; i++)
    {
        psa[i][0] = psa[i - 1][0] + a[i][0];
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            psa[i][j] = psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1] + a[i][j];
        }
    }
    
    cout<<"The Following Prefix Sum will be: "<<endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<" "<<psa[i][j]<<"  ";
        }
        cout<<endl;
    }
        
}

int main()
{
    int a[][3] = {
        {10, 20, 30},
        {5, 10, 20},
        {2, 4, 6}};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    prefixSum(a, n);
    return 0;
}
*/