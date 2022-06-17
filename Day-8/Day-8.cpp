/****
    Code Challenge
Day - 8
Classes and objects and Float, precision, round, trunc, ceil.
****/

/*** Classes and objects ***/
/*
#include<iostream>
using namespace std;

class Different{
public:
    void assign(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    void area()
    {
        cout <<"Area: "<< length * breadth << endl;
    }
    void volume()
    {
        cout << "Volume: "<< length*breadth*height<< endl;
    }
private:
    int length, breadth, height;
};
int main()
{
    Different mereObjects;
    mereObjects.assign(2, 3, 4);
    mereObjects.area();
    mereObjects.volume();
    return 0;
}
*/

/*** Float and precision ***/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<< "floor: "<<floor(2.55) <<endl; // returns the closest integer lesser than the given value...
    cout<< "trunc: "<< trunc(3.434341) <<endl; // return the integer value by ignoring the decimal value...
    cout<< "Lesser than the integer: "
    <<round(5.4) <<endl<< "Greater than the integer: "
    <<round(5.5) << endl; // returns integer value based on the decimal...
    cout<< "ceil: " << ceil(4.3)<<endl; // returns the integer greater than the given value...
    cout<< "Set precision ( use fixed keyword before ): "<<fixed<<setprecision(3)<< double(3.4242342) <<endl;
    return 0;
}
*/