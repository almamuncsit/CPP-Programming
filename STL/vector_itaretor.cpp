#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < int > v;

    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );
    v.push_back( 5 );

    vector <int>::iterator p = v.begin();
    v.insert(v.begin() + 5, 3, 50);


    while (p != v.end()) {
        cout << *p << endl;
        p++;
    }


    return 0;
}
