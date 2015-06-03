#include<iostream>
using namespace std;

int ascending(int a, int b)
{
    if(a > b)
        return 1;
    else
        return -1;
}


int descending(int a, int b)
{
    if(a > b)
        return -1;
    else
        return 1;
}



void bubbleSort(int *data, int n, int (*compare)(int, int))
{
    int temp;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if ( compare(data[i], data[j]) > 0 ) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // Show output
    for(int i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }

}

int main()
{
    int n = 9;
    int A[] = {8, 2, 3, 1, 4, 6, 7, 5, 9};

    cout << "Ascending Order : " << endl;
    bubbleSort(A, n, ascending);

    cout << endl << endl << "Descending Order : " << endl;
    bubbleSort(A, n, descending);

    return 0;
}
