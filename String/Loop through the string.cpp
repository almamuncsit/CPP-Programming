#include <iostream>
using namespace std;

int main()
{
    string name = "Mamun sarkar";

    for (int i=0; i<name.size(); ++i) {
        cout << i << " char is : " << name[i] << endl;
    }

    return 0;
}
