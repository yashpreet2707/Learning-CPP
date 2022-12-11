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