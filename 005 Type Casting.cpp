#include<iostream>
using namespace std;

int main()
{
    int a = 4, b = 9, p;
    double c;
    float f = 2.5;

    c = (double) b / a; // Casting integer to double
    p =  (int) f; // casting Float to Int

    cout << "Division of a and b is : " << c << endl;
    cout << "P is : " << p ;

    return 0;
}
