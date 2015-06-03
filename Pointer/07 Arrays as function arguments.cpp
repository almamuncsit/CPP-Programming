#include<iostream>
using namespace std;

// Array as Parameter
int sumOfArray(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i<size; i++) {
        sum += A[i];
    }

    return sum;
}

// Pointer as Parameter same with Array as parameter
int sumOfArrayPointer(int *A, int size)
{
    int i, sum = 0;
    for (i = 0; i<size; i++) {
        sum += A[i];
    }

    return sum;
}



int main()
{
    int A[] = {1, 2, 3, 4, 5}, total;

    int size = sizeof(A) / sizeof(A[0]);

    // Send Array name
    total = sumOfArray(A, size);
    cout << "Total is : " << total << endl;

    // Send Array name
    total = sumOfArray(&A[0], size);
    cout << "Total is : " << total << endl;


    // Send Array name
    total = sumOfArrayPointer(A, size);
    cout << "Using pointer Total is : " << total << endl;

    return 0;
}
