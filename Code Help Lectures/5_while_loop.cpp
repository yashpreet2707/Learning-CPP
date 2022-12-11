
//                  1 to N sum 

#include <iostream>
using namespace std;
int main() {
    int n;
    int sum;

    cout << "Enter the number till you want the sum :- " ;
    cin >> n;

    sum = (n*(n+1))/2;

    cout << "The sum is : " << sum << endl;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1;
    int sum=0;

    cout << "Enter the number till you want the sum :- ";
    cin >> n;

    while (i<=n) {
        sum = sum+i;
        i= i+1;
    }
    
    cout << "The sum is : " << sum << endl;

}



//             Find the sum of even numbers :

#include <iostream>
using namespace std;
int main() {
    int n;
    int i=2;
    int sum=0;

    cout << "Enter the number :- " ;
    cin >> n;

    while (i<=n) {
        sum = sum + i ;
        i = i + 2;
    }

    cout << "The sum of even numbers till n is : " << sum << endl;

}

