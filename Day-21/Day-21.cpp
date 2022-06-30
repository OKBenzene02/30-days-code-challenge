/****
    Code Challenge
Day - 21
Difference Array | Range update query in O(1).
****/

/** Method one **/
/*
#include <bits/stdc++.h>
using namespace std;

int a[4] = {10, 5, 20, 40}, n = sizeof(a)/sizeof(a[0]);

void update(int l, int r, int x)
{
    for (int i = l; i <= r; i++)
    {
        a[i] += x;
    }
}

void printArray()
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    update(0, 1, 10);
    printArray();
    update(1, 3, 20);
    update(2, 2, 30);
    printArray();
    return 0;
}
*/

/** Method 2 **/
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> differArray(vector<int>& a)
{
    int n = a.size();
    vector<int> differ(n + 1);
    differ[n] = 0;
    differ[0] = a[0];
    
    for (int i = 1; i < n; i++)
    {
        differ[i] = a[i] - a[i - 1];
    }
    
    return differ;
}

void update(vector<int>& D, int l, int r, int x)
{
    D[l] += x;
    D[r + 1] -= x;
    
}

void printArray(vector<int>& D, vector<int>& a)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (i == 0)
        {
            a[i] = D[i];
        }
        else{
            a[i] = D[i] + a[i - 1];
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> a {10, 5, 20, 40};
    
    vector<int> d = differArray(a);
    
    update(d, 0, 1, 10);
    printArray(d, a);
    
    
    return 0;
}
*/