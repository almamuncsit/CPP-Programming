#include<iostream>
using namespace std;

void func(int a[][3][2])
{
    cout << endl << "a[1][2][1] is : " << a[1][2][1] << endl;
}


int main()
{
    int c[3][3][2] = {
        { {1, 2}, {3, 4}, {5, 6} },
        { {7, 8}, {9, 10}, {11, 12} },
        { {13, 14}, {15, 16}, {17, 18} }
    };

    int (*p)[3][2] = c;

    cout << "c[0][0][0] is : " << c[0][0][0] << " *(*(*(p))) is : " << *( *( *p ) ) << endl;

    cout << "c[0][0][1] is : " << c[0][0][1] << " *(*(*(p)) +1 ) is : " << *( *( *(p) ) + 1 ) << endl;

    cout << "c[0][1][0] is : " << c[0][1][0] << " *(*(*(p))) is : " << *( *( *(p) + 1 ) ) << endl;

    cout << "c[1][0][0] is : " << c[1][0][0] << " *(*(*(p))) is : " << *( *( *(p + 1 )) )  << endl;

    cout << "c[1][2][1] is : " << c[1][2][1] << " *(*(*(p+1)+2)+1) is : " << *( *( *( p + 1 ) + 2 ) + 1)  << endl;

    // Pass 3D array as function parameter
    func(c);

    return 0;
}
