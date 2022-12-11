//      Whether  a number is prime or not ?


#include <iostream>
using namespace std;
int main() {

    int i , p=0 , n;

    cout << "Enter the number :- " ;
    cin >> n;

    for (i=2 ; i <= n ; i++)  {

        if ((n%i)==0) {
            p = p+1 ;
        }
        else {
            continue;
        }
    }
    
    if (p==1) {
        cout << n << " is prime." << endl;
    }
    else {
        cout << n << " is not prime." << endl;
    }


}


//              USING WHILE LOOP
//              ANOTHER APPROACH 

// for example the number is 7, then from 2 to 6 ko 7 se divide karke agar remainder 0 na aaya to wo Prime hai else nahi h


#include <iostream>
using namespace std;
int main() {
    int i=2,n;

    cout << "Enter the value of n : " ; cin >> n;

    while (i<n) {

        if ((n%i)==0) {         //divide hogya that means it is not prime.
            cout << n << " is not prime." << i <<  endl;
        }
        else {
            cout << n << " is prime." << i << endl;
        }
        i = i+1; 

    }
}