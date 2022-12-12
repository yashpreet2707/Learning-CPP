
//          Pattern -1 

#include <iostream>
using namespace std;
int main() {
     
    int n; 
    int i=1;                 // i signifies the rows.

    cout << "Enter the value of n : " ; cin >> n;

    while (i<=n) {

        int j=1;             // j signifies the columns.
        while (j<=n) {
            cout << "* ";
            j = j+1;
        }
        cout << endl;
        i = i+1; 
    }
}

/*

Enter the value of n : 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/




//         Pattern -2


#include <iostream>
using namespace std;
int main () {
    int n;          
    int i=1;        // i signifies the rows.

    cout << "Enter the value of n : " ; cin >> n;

    while (i <= n) {

        int j=1;            // j signifies the columns.
        while (j <= n) {
            cout << i << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}

/*

Enter the value of n : 3
1 1 1 
2 2 2 
3 3 3 

*/



//              Pattern -3

#include <iostream>
using namespace std;
int main() {
    int i=1;
    int n;
    
    cout << "Enter the value of n : " ; cin >> n;

    while (i <= n) {
        int j=1;

        while (j<=n) {
            cout << j << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    
}

/*

Enter the value of n : 3
1 2 3 
1 2 3 
1 2 3 

*/



//          Pattern -4

#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1;

    cout << "Enter the value of n : " ; cin >> n;

    while (i <= n) {                             //Alternative (love bhaiya)

        int j=n;                             //int j=1;
                                
        while (j>0 && j<=n) {                //while (j <= n) {
            cout << j << " " ;               //    cout << n-j+1 << " ";
            j = j-1;                         //    j = j+1;
        }                                    // }
        cout << endl;                        //cout << endl;
        i = i+1;                             //i = i+1;

    }

}

/*

Enter the value of n : 3
3 2 1 
3 2 1 
3 2 1 

*/




//          Pattern -5


#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1;
    int count=1;

    cout << "Enter the value of n : " ; cin >> n ;

    while ( i<=n ) {

        int j=1;

        while ( j<=n ) {

            cout << count << " ";
            count = count+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    } 
}



/*

Enter the value of n : 3
1 2 3 
4 5 6 
7 8 9 

*/