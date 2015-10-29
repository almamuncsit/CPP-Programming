#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Mamun ");
    string s2 = "Sarkar ";
    string s3, s4, s6;
    string s5(s1);
    s3 = s2;
    s4 = s1 +  s2;

    cout << "S1 is : " << s1 << endl;
    cout << "S2 is : " << s2 << endl;
    cout << "S3 is : " << s3 << endl;
    cout << "S4 is : " << s4 << endl;
    cout << "S5 is : " << s5 << endl;

    // Compare string
    if (s4 == s1 + s2)
        cout << "After compare S4 is : " << s4 << endl;


    cout << "Enter a string : " << endl;
    cin >> s6; // Get input of string
    cout << "S6 is : " << s6 << endl;

    return 0;
}
