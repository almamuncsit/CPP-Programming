#include<iostream>
using namespace std;

int add (int a, int b)
{
    return a+b;
}

int main()
{
    int total;
    // Function Pointer
    int (*p)(int, int);
    p = &add;
    total = (*p)(4, 5);
    cout << "Total is : " << total << endl;

    // Another way
    p = add;
    total = p(7, 9);
    cout << "Total is : " << total;

    return 0;
}
