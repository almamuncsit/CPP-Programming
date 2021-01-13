#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map < string , string> m;

    m["name"] = "Md. Al-Mamun Sarkar";
    m["email"] = "test@example.com";

    cout << m["name"] << endl;
    cout << m["email"] << endl;
    
    cout << "Looping Map" << endl;
    for (auto& x: m) {
        cout << x.first << ": " << x.second << '\n';
    }

    return 0;
}
