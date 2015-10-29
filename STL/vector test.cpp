#include <vector>
#include <iostream>
using namespace std;
int main ()
{
    // Instantiate a vector with 4 elements, each initialized to 90
    vector <int> v (4, 90);

    vector <int>::iterator i;
    for ( i = v.begin (); i != v.end (); ++ i ){
        cout << *i << ' ';
    }
    vector <int> vecAnother (2, 30);

    v.insert (v.begin () + 1,vecAnother.begin (), vecAnother.end ());

    for ( i = v.begin (); i != v.end (); ++ i )
    {
        cout << *i << ' ';
    }

    return 0;
}
