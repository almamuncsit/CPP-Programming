#include<iostream>
using namespace std;

int main()
{
    int a = 10, b;
    int *p = &a;
    // Print Pointer Location and Value
    cout << "Changed Location of p is: " << p <<endl;
    cout << "Changed Value of p is: " << *p <<endl;

    // Print Pointer P+1 Location and Value
    cout << "Changed Location of p is: " << p+1 <<endl;

    //Increment Pointer value
    b = *p + 15;
    cout << "Print b: " << b <<endl;

    return 0;
}
