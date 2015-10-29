#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector < int > v;
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);

    sort(v.begin(), v.end());


    vector < int >::iterator i = v.begin();

    while (i != v.end()) {
        cout << *i << " ";
        ++i;
    }


    cout << endl;
    // Sort Array
    int A[] = {9, 8, 7, 5, 4, 1, 2, 3, 6, 15, 12, 13, 14, 48, 45, 15, 254};
    sort (A, &A[9]);

    for (int i=0; i<(sizeof(A)/sizeof(*A)); ++i) {
        cout << A[i] << " ";
    }


    return 0;
}
