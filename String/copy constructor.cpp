#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 (" Mamun ");
    string s2 (" Sarkar ");

    string *s3 = new string();
    s3 = &s1;

    cout << "*s3 is : " << *s3 << endl;

    s1 = " Hsaan ";
    cout << "New *s3 is : " << *s3 << endl;

    string *s4 = new string(s2);
    cout << "*s4 is : " << *s4 << endl;

    return 0;
}
