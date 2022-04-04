// Ex005_08.cpp
// Uaing the continue statement to display ASCII character codes
#include<iostream>
#include<iomanip>
#include<limits>
#include<cctype>

using namespace std;

int main () {
    // Output the column headings
    cout << setw(11) << "Character " << setw(13) << "Hexadeximal " << setw(9) << "Decimal " << endl;
    cout << uppercase;  //Uppercase hex digits

    // Output character and corresponding codes
    unsigned char ch {};
    do {
        if (!isprint(ch)) continue;     // If it's not printable...
        cout << setw(6) << ch           // Character
        << hex << setw(12) << static_cast<int>(ch)  // Hexadecimal
        << dec << setw(10) << static_cast<int>(ch)  // Decimal
        << endl;
    } while (ch++ < numeric_limits<unsigned char>::max());

    return 0;
}