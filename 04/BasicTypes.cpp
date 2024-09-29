// Learning C++
// BasicTypes.cpp

#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std; 

int main () {

    // integer: positive and negative
    int myInt = 0;
    // unsigned integer: only positive
    uint myUInt = 0;

    cout << myInt << endl;
    cout << myUInt << endl;
    cout << --myInt << endl;
    cout << --myUInt << endl;

    // sizeof() returns the number of bytes of the type
    cout << sizeof(int) << endl;

    // constants with MAX of int/uint with 32 bit
    cout << INT32_MAX << endl;
    cout << UINT32_MAX << endl;

    myInt = INT32_MAX;
    cout << myInt << endl;
    cout << ++myInt << endl;

    // bit type, the number is the number of bits 
    bitset<32> b1(myInt);
    bitset<8> b2(0xA);
    bitset<4> b3(string("11110"));

    cout << b1.to_string() << endl;
    cout << b2.to_string() << endl;
    cout << b3.to_string() << endl;

    int16_t myInt16 = 0;
    uint16_t myUInt16 = 0;
    cout << --myInt16 << endl;
    cout << --myUInt16 << endl;

    // for real number
    float f = 12.5;
    double d = 14.12;
    long double ld = 3.1415123412341234;

    cout << f << endl;
    cout << d << endl;
    cout << setprecision(32);
    cout << ld << endl;

    cout << sizeof(f) << endl; 
    cout << sizeof(d) << endl; 
    cout << sizeof(ld) << endl; 

    bool b = true;

    cout << b << endl;
    cout << boolalpha << b << endl;
    cout << boolalpha << !b << endl;

    string str = "Stefano";
    char ch = 's';

    cout << str << endl;
    cout << ch << endl;
    cout << ++ch << endl;
    cout << sizeof(ch) << endl;
    cout << sizeof(str) << endl;

    void *ptr = &myInt;

    cout << ptr << endl;
    cout << *((int*)ptr) << endl;

    ptr = &ld;
    cout << ptr << endl;
    cout << *((long double*)ptr) << endl;

    
    cout << endl << endl;
}
