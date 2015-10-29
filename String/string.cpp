#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  string strA("This is a test.");

  // Create an iterator to a string.
  string::iterator itr;

  // Now, replace 'bigger' with 'larger'.
  cout << "Replace bigger with larger.\n";
  itr = find(strA.begin(), strA.end(), 'b');
  strA.replace(itr, itr+6, "larger");
  cout << strA << "\n\n";

  return 0;
}
