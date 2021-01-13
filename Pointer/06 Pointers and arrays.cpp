#include<iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 8, 6, 98, 12};

    cout << "Output of of A : " << A << endl;
    cout << "Output of of &A[0] : " << &A[0] << endl;

    // Print First Element of an array
    cout << "Output of of *A : " << *A << endl;
    cout << "Output of of A[1] : " << A[0] << endl;

    // Print 4th Element of an array
    cout << "Output of of *A : " << *(A+3) << endl;
    cout << "Output of of A[1] : " << A[3] << endl;


    int *p = A;
    // Print 4th Element of an array
    cout << "Output of of *p : " << *p << endl;
    p++;
    cout << "Output of of *p : " << *p << endl;
    cout << "Output of of p++ : " << *(++p) << endl;

    return 0;
}
