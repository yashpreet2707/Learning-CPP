
// Data Types and the size (storage) of the various data types


#include <iostream>
using namespace std;
int main() {

    cout << "The various Data-Types :- " << "\n" << endl;

    int a=123;
    cout << "the value of a (int-data type) : \t" << a << endl;

    char b='y';
    cout << "the value of b (char-data-type) : \t" << b << endl;

    bool c= false;
    cout << "the value of c (bool-data-type) : \t" << c << endl;

    float f= 1.234;
    cout << "the value of f (float-data-type) : \t" << f << endl;

    double d= 1.234;
    cout << "the value of d (double-data-type) : \t" << d << "\n" << endl;


    cout << "Now the values of the data-types :-" << "\n" << endl;


    int size_a = sizeof(a);
    cout << "size of int-data-type : \t" << size_a << endl;

    int size_b = sizeof(b);
    cout << "size of char-data-type : \t" << size_b << endl;

    int size_c = sizeof(c);
    cout << "size of bool-data-type : \t" << size_c << endl;

    int size_f = sizeof(f);
    cout << "size of float-data-type : \t" << size_f << endl;

    int size_d = sizeof(d);
    cout << "size of double-data-type : \t" << size_d << endl;
}



