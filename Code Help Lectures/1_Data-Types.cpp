
// Data Types and the size (storage) of the various data types


#include <iostream> 
using namespace std;
int main() {

    int a=123;
    cout << "the value of a (int-data-type) : " << a << endl;

    char b = 'y';
    cout << "the value of a (int-data-type) : " << b << endl;

    bool b1 = false;
    cout << "the value of a (int-data-type) : " << b1 << endl; 

    float f=1.234;
    cout << "the value of a (int-data-type) : " << f << endl;

    double d=1.23435432;
    cout << "the value of a (int-data-type) : " << d << endl;


    int size_a = sizeof(a);
    cout << "the size of a (int-data-type) : " << size_a << endl;

    int size_b = sizeof(b);
    cout << "the size of b (char-data-type) : " << size_b << endl;

    int size_b1 = sizeof(b1);
    cout << "the size of b1 (bool-data-type) : " << size_b1 << endl;

    int size_f = sizeof(f);
    cout << "the size of f (float-data-type) : " << size_f << endl;

    int size_d = sizeof(d);
    cout << "the size of d (double-data-type) : " << size_d << endl;
}