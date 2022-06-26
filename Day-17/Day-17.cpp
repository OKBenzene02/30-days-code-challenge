/****
    Code Challenge
Day - 17
Travelling salesman problem using Naive and dynamic approach with Bitwise masking. (Practice)
 * References GeeksForGeeks.
****/

///---- Travelling salesman problem using naive and dynamic approach ----///
/*
#include <iostream>
 
using namespace std;
 
const int n = 4;

const int MAX = 99999999;
 
int dist[n + 1][n + 1] = {
    { 0, 0, 0, 0, 0 },   
    { 0, 0, 10, 3, 25 },
    { 0, 10, 0, 20, 9 }, 
    { 0, 3, 20, 0, 30 },
    { 0, 25, 10, 3, 0 },
};
 
int memo[n + 1][1 << (n + 1)];
 
int fun(int i, int bitmask)
{
    if (bitmask == ((1 << i) | 3))
        return dist[1][i];
    
    if (memo[i][bitmask] != 0)
        return memo[i][bitmask];
 
    int res = MAX; 
 
    for (int j = 1; j <= n; j++)
        if ((bitmask & (1 << j)) && j != i && j != 1)
            res = min(res, fun(j, bitmask & (~(1 << i))) + dist[j][i]);
    return memo[i][bitmask] = res;
}

int main()
{
    int ans = MAX;
    for (int i = 1; i <= n; i++)
        ans = min(ans, fun(i, (1 << (n + 1)) - 1) + dist[i][1]);
 
    printf("The cost of most efficient tour = %d", ans);
 
    return 0;
}
*/


