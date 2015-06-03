#include<iostream>
using namespace std;

void increment(int *a)
{
    *a = *a + 1;
}


int main()
{
    int a = 15;
    increment(&a);
    cout<<"New Value of a is: "<<a;

    return 0;
}
