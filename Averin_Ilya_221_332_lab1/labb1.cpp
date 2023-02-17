#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "1." << endl;
    cout << "Averin Ilya Olegovich, 221-332" << endl;
    cout << "2." << endl;
    cout << "min int = " << int(0b10000000000000000000000000000000) << ',' << "max int = " << int(0b01111111111111111111111111111111) << ',' << "size of int = " << sizeof(int) << endl;
    cout << "min unsigned int = " << unsigned(0b00000000000000000000000000000000) << ',' << "max unsigned int = " << unsigned(0b01111111111111111111111111111111) << ',' << "size of unsigned int = " << sizeof(unsigned) << endl;
    cout << "min short = " << short(0b1000000000000000) << ',' << "max short = " << short(0b0111111111111111) << ',' << "size of short = " << sizeof(short) << endl;
    cout << "min unsigned short = " << unsigned short(0b0000000000000000) << ',' << "max unsigned short = " << unsigned short(0b0111111111111111) << ',' << "size of unsigned short = " << sizeof(unsigned short) << endl;
    cout << "min long = " << long(0b10000000000000000000000000000000) << ',' << "max long = " << long(0b01111111111111111111111111111111) << ',' << "size of long = " << sizeof(long) << endl;
    cout << "min long long = " << long long(0b1000000000000000000000000000000000000000000000000000000000000000) << ',' << "max long long = " << long long(0b0111111111111111111111111111111111111111111111111111111111111111) << ',' << "size of long long = " << sizeof(long long) << endl;
    cout << "min double = -" << double(0b1000000000000000000000000000000000000000000000000000000000000000) << ',' << "max double = " << double(0b0111111111111111111111111111111111111111111111111111111111111111) << ',' << "size of double = " << sizeof(double) << endl;
    cout << "min char = " << int(0b00000000) << ',' << "max char = " << int(0b11111111) << ',' << " size of char = " << sizeof(char) << endl;
    cout << "min bool = " << int(0b00000000) << ',' << "max bool = " << int(0b11111111) << ',' << " size of bool = " << sizeof(bool) << endl;
    cout << "3." << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "In binary form " << bitset<16>(n) << endl;
    cout << "In hexadecimal form " << hex << n << endl;
    cout << "bool " << bool(n) << endl;
    cout << "double " << double(n) << endl;
    cout << "char " << char(n) << endl;
    cout << "4." << endl;
    cout << "Enter the coefficients  a * x = b: ";
    double a, b;
    double x;
    cin >> a >> b;
    cout << a << " * x = " << b << endl;
    cout << "x = " << b << '/' << a << endl;
    x = b / a;
    cout << "x = " << x << endl;
    cout << "Answer: " << x << '.' << endl;
    cout << "5.";
    double i, j;
    cout << "Enter the coordinates of the segment on the straight line: ";
    cin >> i >> j;
    cout << "The middle of the segment is at the point with the coordinate " << (i + j) / 2 << '.';







    return 0;

}