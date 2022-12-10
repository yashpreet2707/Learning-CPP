#include <iostream>
using namespace std;
int main() {

    cout << 2/5 << endl;     // int/int is always int    float/int is float  double/int is double 

    cout << 2.0/5 << endl;


    cout << "\nRelational Operators :-\n" << endl;

    int a = 2;
    int b = 3;

    bool first = (a==b) ;
    cout << first << endl;

    bool second = (a>b) ;
    cout << second << endl;

    bool third = (a<b) ;
    cout << third << endl;

    bool fourth = (a>=b) ;
    cout << fourth << endl;

    bool fifth = (a<=b) ;
    cout << fifth << endl;

    // LOGICAL OPERATORS - (&& , || , !)

    bool sixth = (a!=b) ;
    cout << sixth << endl;

    // BITWISE OPERATORS 

}

/*

0
0.4

Relational Operators :-

0
0
1
0
1
1

*/