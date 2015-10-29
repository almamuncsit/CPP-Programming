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

    cout << "Vector Is : " << endl;
    for (int i=0; i<v.size(); i++) {
        cout << "v[" << i << "] is : " << v[i] << endl;
    }

    v[2] = 5;
    v.at( 3 ) = 10;

    cout << "New vector Is : " << endl;
    for (int i=0; i<v.size(); i++) {
        cout << "v[" << i << "] is : " << v[i] << endl;
    }

    return 0;
}
