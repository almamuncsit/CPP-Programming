#include <iostream>
#include <string>
using namespace std;

int main()
{
    string msg = "Welcome to Dhaka of Bangladesh";
    string dis = "Bogra";
    cout << "Before replace : " << msg << endl;

    msg.replace(11, dis.size(), dis);

    cout << " After replace : " << msg << endl << endl;

    string credit_card( "4578 9906 512 6661" );
   cout << "Credit card number: " << credit_card;

   // equivalent of strnset()
   credit_card.replace( 0, credit_card.length()-4,credit_card.length()-4, '*' );
   cout << "\nSecure display of credit card number: " << credit_card;


    return 0;
}
