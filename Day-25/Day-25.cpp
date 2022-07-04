/****
    Code Challenge
Day - 25
Activity selection algorithm
 * References - https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/
****/

///--- Activity selection algorithm ---///
#include <bits/stdc++.h>
using namespace std;

void maxActivites(int start[], int finish[], int n)
{
    int k;
    
    cout<<"Max number of activites ";
    
    k = 0;
    cout<<k<<" ";

    for (int i = 1; i < n; i++)
    {
        if(start[i] >= finish[k])
        {
            cout<<i<<" ";
            k = i;
        }
    }
    
}

int main()
{
    int s[] {1, 3, 0, 5, 8, 5}, f[] {2, 4, 6, 7, 9, 9}, n = sizeof(s)/sizeof(s[0]);
    maxActivites(s, f, n);
    return 0;
    return 0;
}