#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 8;
    int *p;
    p = &a;
    cout << "Location of p is: " << p <<endl;
    cout << "Value of p is: " << *p <<endl;

    // Change Location
    p = &b;
    cout << "Changed Location of p is: " << p <<endl;
    cout << "Changed Value of p is: " << *p <<endl;


    // Change value of pointer
    *p = 50;
    cout << "Changed Location of p is: " << p <<endl;
    cout << "Changed Value of p is: " << *p <<endl;

    // Change value of Variable
    b = 100;
    cout << "Changed Location of p is: " << p <<endl;
    cout << "Changed Value of p is: " << *p <<endl;


    return 0;
}
