#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    cout << "Print p " << p << endl;
    cout << "Print *p " << *p << endl;
    cout << "Print *q " << *q << endl;
    cout << "Print **q " << *(*q) << endl;
    cout << "Print ***r " << *(*r) << endl;
    cout << "Print ***r " << *(*(*r)) << endl;

    // Change value of x by r pointer
    ***r = 152;
    cout << "Print x " << x << endl;

    // Change value of x by r pointer
    **q = 280;
    cout << "Print x " << x << endl;

    // Change value of x by p pointer
    *p = 384;
    cout << "Print x " << x << endl;

    // Change value of x by x
    *p = 785;
    cout << "Print x " << x << endl;

    return 0;
}
