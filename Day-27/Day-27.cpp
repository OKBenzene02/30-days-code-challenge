/****
    Code Challenge
Day - 27
Activity selection part-2.
 * references - https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/
****/

///--- Activity selection part-2 ---///

#include <bits/stdc++.h>
using namespace std;

struct activites{
  int start;
  int finish;
};

bool compare(struct activites a, struct activites b)
{
    return (a.finish < b.finish);
}

void selection(struct activites array[], int n)
{
    sort(array, array + n, compare);
    
    int k = 0;
    cout<<"The activities are "<< endl
        <<"("<<array[k].start<<", "<<array[k].finish<<")"<<endl;
    
    for (int i = 1; i < n; i++)
    {
        if (array[i].start >= array[k].finish)
        {
            cout<< "("<<array[i].start<<", "<<array[i].finish<<")"<<endl;
            k = i;
        }
    }
}

int main()
{
    struct activites arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr, size);
    return 0;
}