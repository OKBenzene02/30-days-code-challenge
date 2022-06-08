/****
    Code Challenge
Day - 3
Palindrome Problem
****/

/*** Palindrome ***/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int palindrome(char string[])
{
    int low = 0;
    int high = (int)strlen(string) - 1;
    for (int i = 0; i < (int)strlen(string); i++)
    {
        if (string[low++] != string[high--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char string[100];
    cout<<"enter the string: "<<endl;
    cin>>string;
    cout<<palindrome(string);
    return 0;
}
*/