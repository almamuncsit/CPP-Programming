#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < vector < int > > v(5);
    v[0].resize(10);
    v[1].resize(5);
    v[0][1] = 500;

    cout << "Vector size is : " << v.size() << endl;

    for (int i = 0; i<v.size(); ++i) {
        for (int j = 0; j<v[i].size(); ++j) {
            cout << "I is : " << i << " J is : " << j << " Value is : " << v[i][j] << endl;
        }
    }



    return 0;
}
