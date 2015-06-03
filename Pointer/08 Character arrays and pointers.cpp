#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char c[50];
    c[0]= 'M';
    c[1]= 'a';
    c[2]= 'm';
    c[3]= 'u';
    c[4]= 'n';
    c[5]= '\0';

    char name[] = "Mamun sarkar";
    char *p = name;

    cout << "Name is : " << c << endl;
    cout << "Name is via pointer : " << p << endl;
    cout << "Name is : " << name << endl;
    cout << "Size is : " << sizeof(name) << endl;
    cout << "Length is : " << strlen(name) << endl;

    return 0;
}
