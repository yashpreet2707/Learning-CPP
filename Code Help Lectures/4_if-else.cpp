#include <iostream>
using namespace std;
int main() {

    cout << "Whether the input is Uppercase or Lowercase of Numberic :- \n";

    char ch;
    cout << "Please enter your input :- "; 
    cin >> ch;

    if (ch>=65 && ch<=90) {
        cout << "Uppercase" << endl;
    }
    else if (ch>=97 && ch<=122) {
        cout << "Lowercase" << endl;
    }
    else if (ch>=48 && ch <=57) {
        cout << "Numeric" << endl;
    }

}