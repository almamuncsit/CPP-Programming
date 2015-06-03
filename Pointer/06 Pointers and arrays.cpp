#include<iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 8, 6, 98, 12};

    cout << "Value of A : " << A << endl;
    cout << "Value of &A[0] : " << &A[0] << endl;

    // Print First Element of an array
    cout << "Value of *A : " << *A << endl;
    cout << "Value of A[1] : " << A[0] << endl;

    // Print 4th Element of an array
    cout << "Value of *A : " << *(A+3) << endl;
    cout << "Value of A[1] : " << A[3] << endl;


    int *p = A;
    // Print 4th Element of an array
    cout << "Value of *p : " << *p << endl;
    p++;
    cout << "Value of *p : " << *p << endl;
    cout << "Value of p++ : " << *(++p) << endl;

    return 0;
}
