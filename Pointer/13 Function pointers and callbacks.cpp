#include<iostream>
using namespace std;

void A()
{
    cout << "Hello";
}

void B(void (*ptr)())
{
    ptr();
}

int main()
{
    B(A);
    return 0;
}
