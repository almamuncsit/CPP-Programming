#include<iostream>
using namespace std;

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int (*p)[3] = A;
    cout << "1 => A is: " << A << " A[0] is : " << A[0] << " *A[0] is : " << *A[0] << endl;

    cout << "2 => *A is: " << *A << " A[0] is : " << A[0] << " &A[0][0] is : " << &A[0][0] << " A[0][0] is : " << A[0][0] << endl;

    cout << "3 => *(A+1) is: " << *(A+1) << " &A[1] is : " << A[1] << " &A[1][0] is : " << &A[1][0] << " A[1][0] is : " << A[1][0] << endl;

    cout << "4 => *(A+1)+2 is : " << *(A+1)+2 << endl;

    cout << "5 => *(*(A+1)+2) is : " << *(*(A+1)+2) << endl;

    // A[i][j] == *( A[i] + j ) == *(*(A + i) + j) Are same
    return 0;
}
