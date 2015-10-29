#include <iostream>
#include <vector>
#include <algorithm> // For find();
using namespace std;

int main()
{
    vector < int > v; // Declare Vector

    v.push_back( 1 ); // Insert Data to vector
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );
    v.push_back( 5 );

    v.at(2) = 33;
    v.insert (v.begin (), 2, 25); // Insert At begin
    v.insert (v.end(), 5, 88); // Insert at End

    cout << "Size is : " << v.size() << endl; // Show size of vector

    // Find by data
    vector <int>::iterator f= find(v.begin(), v.end(), 2);
    cout << "2 Find at : " << *f << endl;


    // Print Output via Iterator
    vector <int>::iterator p = v.begin();
    while (p != v.end()) {
        cout << *p << endl;
        p++;
    }
}
