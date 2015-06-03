#include<iostream>
using namespace std;

int main()
{
    int a = 1025;
    int *p = &a;
    // Print Pointer Location and Value
    cout << "Location of p is: " << p <<endl;
    cout << "Value of p is: " << *p <<endl;


    char *c = (char*)&a;
    // Print Pointer Location and Value
    cout << "Location of c is: " << c <<endl;
    cout << "Value of c is: " << *c <<endl;


    return 0;
}
