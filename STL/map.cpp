#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map < string , string> m;

    m.at("name") = "Md. Al-Mamun Sarkar";

    cout << m.find("name")->second;

    return 0;
}
