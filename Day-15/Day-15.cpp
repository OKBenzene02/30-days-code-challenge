/****
    Code Challenge
Day - 15
Fractional Knapsack and 0/1 Knapsack.
****/

///--- Fractional Knapsack ---///
/*
#include<bits/stdc++.h>
using namespace std;

struct items{
    int weight;
    int profit;
    items(int weight, int profit)
    {
        this -> weight = weight;
        this -> profit = profit;
    }
};

bool comparison(struct items w, struct items p)
{
    double r1 = (double)w.profit / (double)w.weight;
    double r2 = (double)p.profit / (double)p.weight;
    return r1 > r2;
}

int fractionalKnapsack(struct items arr[], int W, int n)
{
    sort(arr, arr + n, comparison);
    
    double maxWeight = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            maxWeight += arr[i].profit;
        }
        else{
            maxWeight += arr[i].profit * ((double) W/ (double)arr[i].weight);
            break;
        }
    }
    
    return maxWeight;
    
}

int main()
{
    int W = 50;
    
    items arr[] = {{10, 60}, {20, 100}, {30, 120}};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Maximum weight obtained is "<<fractionalKnapsack(arr, W, n)<<endl;
    return 0;
}
*/

///--- 0/1 Knapsack ---///
/*
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a  >  b) ? a : b;
}

int knapsack(int weight[], int profit[], int n, int W)
{
    int sack[n][W];
    
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                sack[i][w] = 0;
            }
            else if (weight[i - 1] <= w)
            {
                 sack[i][w] = max(sack[i - 1][w], profit[i - 1] + sack[i - 1][w - weight[i - 1]]);
            }
            else
            {
                sack[i][w] = sack[i - 1][w];
            }
        }
    }
    
    return sack[n][W];
    
} 

int main()
{
    int weight[] = {2, 3, 4, 5}, profit[] = {1, 2, 5, 6}, n = sizeof(weight)/sizeof(weight[0]), W = 8;
    
    cout<<"Maximum profit obtained "<<knapsack(weight, profit, n, W);
    return 0;
}
*/