 // Type-casting of variables

#include <iostream>
using namespace std;
int main() {

    int a='a';
    cout << a << endl;

    char ch = 98;
    cout << ch << endl;

    char ch1 = 123456;          // 123456 in binary is 11110001001000000 
    cout << ch1 << endl;        // and last byte contains 01000000 which is equal to 64 of decimal.

    // it is way to big for char storage (1byte=8bit)- prints @(coz that's in the range - ACSII table)

    
    int b = -112;           // int can take all values whether +ve or -ve 
    cout << b << endl;

    unsigned int c = -112;  // unsigned int can only take +ve values 
    cout << c << endl;      // after taking 2's compliment of 112 , the most significant bit (first one) gives a very huge value.

}

/*

2_Type-casting.cpp:13:16: warning: implicit conversion from 'int' to 'char' changes value from 123456 to 64 [-Wconstant-conversion]
    char ch1 = 123456;          // 123456 in binary is 11110001001000000 
         ~~~   ^~~~~~
1 warning generated.
97
b
@
-112
4294967184

*/