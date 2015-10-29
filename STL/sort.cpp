#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int ar[] = {5, 8, 7, 9, 6, 11};
    vector < int > v(ar, ar+6);

    // Vector after sort
    cout << "Vector Before sort ";
    vector < int >::iterator q = v.begin();
    while ( q!= v.end()) {
        cout << *q << " ";
        q++;
    }
    cout << endl << "Vector after sort " << endl;

    sort (v.begin(), v.end());

    // Vector after sort
    vector < int >::iterator p = v.begin();
    while ( p!= v.end()) {
        cout << *p << " ";
        p++;
    }

    return 0;
}
