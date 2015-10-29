#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string name;
    cin >> n;
    cout << "Enter line ";
    getline(cin, name);
    cout << "Name is : " << name;

    return 0;
}
