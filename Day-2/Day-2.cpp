/****
    Code Challenge
Day - 2
Sum of digits and its application
 * 
 * For problem statement plz visit - https://practice.geeksforgeeks.org/problems/balanced-string1627/1/
 * 
****/

/***** Sum of the given digits *****/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    cout<<sum;
    return 0;
}
*/

/**** Sum of digits (example) ****/
/*
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n /= 10;
    }
    
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char string[] = "abcdefghijklmnopqrstuvwxyz";
    char reversedString[] = "zyxwvutsrqponmlkjihgfedcba";
    int N = 30;

    if (N % 2 == 0)
    {
        if (N <= 26)
        {
            int firstHalf = N/2;
            int secondHalf = N/2;
            for (int i = 0; i < firstHalf; i++)
            {
                cout<<string[i];
            }
            
            for (int i = secondHalf - 1; i >= 0; i--)
            {
                cout<<reversedString[i];
            }
            
        }
        else{
            int one_cycle = N / 26;
            int firstHalf = (N - (one_cycle * 26)) / 2;
            int secondHalf = (N - (one_cycle * 26)) / 2;
            for (int j = 0; j < one_cycle; j++)
            {
                for (int i = 0; i < (int)strlen(string); i++)
                {
                    cout<<string[i];
                }                
            }
            
            for (int i = 0; i < firstHalf; i++)
            {
                cout<<string[i];
            }
            
            for (int i = secondHalf - 1; i >= 0; i--)
            {
                cout<<reversedString[i];
            }
            
        }
    }
    
    else{
        if (N < 26)
        {
            if (sumOfDigits(N) % 2 == 0)
            {
                int firstHalf = (N + 1)/2;
                int secondHalf = (N - 1)/2;
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0; i--)
                {
                    cout<<reversedString[i];
                }
            }
            else{
                int firstHalf = (N - 1)/2;
                int secondHalf = (N + 1)/2;
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0 ; i--)
                {
                    cout<<reversedString[i];
                }
            }
            
        }
        else{
            if (sumOfDigits(N) % 2 == 0)
            {
                int one_cycle = N / 26;
                int firstHalf = (N - (one_cycle * 26) + 1)/2;
                int secondHalf = (N - (one_cycle * 26) - 1)/2;
                for (int j = 0; j < one_cycle; j++)
                {
                    for (int i = 0; i < (int)strlen(string); i++)
                    {
                        cout<<string[i];
                    }                    
                }
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0; i--)
                {
                    cout<<reversedString[i];
                }
            }
            else{
                int one_cycle = N / 26;
                int firstHalf = (N - (one_cycle * 26) - 1)/2;
                int secondHalf = (N - (one_cycle * 26) + 1)/2;
                for (int j = 0; j < one_cycle; j++)
                {
                    for (int i = 0; i < (int)strlen(string); i++)
                    {
                        cout<<string[i];
                    }                    
                }
                for (int i = 0; i < firstHalf; i++)
                {
                    cout<<string[i];
                }
                
                for (int i = secondHalf - 1; i >= 0 ; i--)
                {
                    cout<<reversedString[i];
                }
            }
        }
    }

    return 0;
}
*/