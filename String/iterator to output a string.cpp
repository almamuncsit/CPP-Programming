#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 ("Welcome to = bangladesh");
    string::const_iterator iterator1 = s1.begin();

    while (iterator1 != s1.end()) {
        cout << *iterator1;
        iterator1++;
    }

    return 0;
}
