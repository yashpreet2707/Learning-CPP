


//      Fahrenheit to Celsius Conversion 

#include <iostream>
using namespace std;
int main() {
    int f,c;

    cout << "Enter the teperature in fahreheit : " ;
    cin >> f;

    c = (f-32)*(5.0/9);             // need to specify 5.0 else 5/9=0 

    cout << "Temperature in celsius is : " << c << endl;
}


//       Celsius to Fahreheit Conversion

#include <iostream>
using namespace std;
int main() {
    int f,c;

    cout << "Enter the temperature in celsius : ";
    cin >> c ;

    f = ((9.0/5)*c) + 32 ;

    cout << "Temperature in Fahrenheit is : " << f << endl;
}


