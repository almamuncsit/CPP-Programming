#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, middle, last;
    cin >> first >> middle >> last;

    cout << "Mask is : " << first.substr(0, 1) << middle.substr(0, 1) << last.substr(0, 2);

    return 0;
}
