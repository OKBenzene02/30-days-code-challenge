/****
    Code Challenge
Day - 19
Adding ones (Prefix sum Application).
 * Reference- https://practice.geeksforgeeks.org/problems/adding-ones3628/1/
****/

/**** Prefix application ****/
/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        for (int i = 0; i < k; i++)
        {
            int j = updates[i] - 1;
            a[j]++;
        }
        
        
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }
    }
};

int main()
{
    cout<<"hello\n";
    int t; cin>>t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        int a[n] {0}, updates[k] {0};
        for (int i = 0; i < k; i++)
        {
            cin>>updates[i];
        }
        Solution ob;
        ob.update(a, n, updates, k);
        
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
    
    
    return 0;
}
*/