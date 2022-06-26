/****
    Code Challenge
Day - 18
Binomial Coefficient and Floyd Warshall's algorithm.
****/

///--- Binomial coefficient using dynamic approach---///
/*
#include <bits/stdc++.h>
using namespace std;

int binomial(int n, int k)
{
    int c[n + 1][k + 1];
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            c[i][j] = 0;
        }
    }
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j == 0 || i == j)
            {
                c[i][j] = 1;
            }
            else{
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            }
        }
    }
    
    return c[n][k];
}

int main()
{
    // where n > k > 0;
    int n = 10, k = 7;
    cout<< n << "C" << k << " = " << binomial(n, k);
    return 0;
}
*/

///--- Floyd warshall's algorithm using Dynamic approach ---///
/*
#include <bits/stdc++.h>
using namespace std;

int infinity = 9999999; // defined for edges not connected.
int n = 4;

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void floyd(int arr[][4], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = minimum(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
    
    cout<<"Final Floyd's matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
    
}

int main()
{
    int matrix[][4] = {
        {0, 3, infinity, 5},
        {2, 0, infinity, 8},
        {infinity, 1, 0, infinity},
        {infinity, infinity, 2, 0}
        }; 
        
    floyd(matrix, n);
    
    return 0;
}
*/