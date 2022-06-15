/****
    Code Challenge
Day - 7
Adjacency Matrix representation and String Matching problem
****/

/**** Adjacency matrix ****/
/*
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int v;
    cout<<"enter number of vertices: "<<endl;
    cin>>v;
    int vertices[v][v];
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            vertices[i][j] = 0;
        }
    }
    
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (vertices[i][j] != 0)
            {
                cout<<i<<" and "<<j<<" connected..."<<endl;
            }
            else{
                cout<<"enter value "<<i<<" and "<<j<<endl;
                cin>>vertices[i][j];
                vertices[j][i] = vertices[i][j];
            }
            
        }
    }
    
    for(int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout<<vertices[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
*/

/**** String Matching problem ****/
/*
#include<bits/stdc++.h>
using namespace std;

void stringMatching(string t, string p)
{
    int n = t.length();
    int m = p.length();
    int count = 0;
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (t[i + j] != p[j])
            {
                break;
            }
        }
        
        if (j == m)
        {
            cout<<"Pattern occurs at "<<i<<endl;
            count++;
        }
    }
    
    if (count){
        cout<<"Pattern exists...."<<endl;
        cout<<"Pattern repeats for "<<count<<" times."<<endl;
    }
    else{
        cout<<"Pattern does not exists."<<endl;
    }
}

int main()
{
    string text = "AABAAABABBBAABA";
    string pattern = "GHJ";
    stringMatching(text, pattern);
    return 0;
}
*/