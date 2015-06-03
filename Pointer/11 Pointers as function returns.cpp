#include<iostream>
using namespace std;

int *sum (int *a, int *b)
{
    int *c = new int;
    *c = *a + *b;
    return c;
}


int main()
{
    int a = 10, b = 15;
    int *total = sum(&a, &b);
    cout << "Total is : " << *total;

    return 0;
}
