#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Declare a set variable
    set < int > s;

    // Insert data to set
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // create set iterator
    set < int >::iterator i = s.begin();

    // Print full set
    while (i != s.end()) {
        cout << *i << " ";
        ++i;
    }

    // Get size of set
    cout << endl << "Size is : " <<s.size();

    // Check if a data in set
    cout << endl <<s.count(5);

    // Check the set is empty or not
    cout << endl <<s.empty();

    // Check the maximum size of set variable
    cout << endl <<s.max_size();

    s.clear();  // Clear set
    return 0;
}
