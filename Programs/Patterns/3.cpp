
//          Pattern -11

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number of rows less than or equal to 26 : " ; cin >> n;

//     int row = 1 ;
//     char ch = 65;


//     if ( n>=1 && n<=26) {

//         while ( row <= n ) {

//         cout << ch << " " << ch << " " << ch ;
//         ch = ch + 1 ;
//         cout << endl;
//         row = row + 1 ;

//         }
//     }

//     else {
//         cout << "WTF ! I told you not to  :-)";
//     }


// }

/*

Enter number of rows less than or equal to 26 : 10
A A A
B B B
C C C
D D D
E E E
F F F
G G G
H H H
I I I
J J J

*/


//      Pattern -11 (alternative)

// #include <iostream>
// using namespace std;
// int main() {

//     int n ;

//     cout << "Enter the number : " ; cin >> n ;

//     int row = 1 ;

//     while ( row <= n ) {

//         int col = 1 ;
        
//         while ( col <= n ) {

//             char ch = 'A' + row - 1 ; 
//             cout << ch << " ";
//             col = col + 1 ;
//         }
//         cout << endl;
//         row = row + 1 ;
//     }
// }

/*

Enter the number : 5
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 

*/


//      Pattern -12



// #include <iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout << "Enter the value of n : " ; cin >> n;

//     int row = 1 ;

//     while ( row <= n ) {

//         int col = 1 ;

//         while ( col <= n ) {

//             char ch = 'A' + col - 1 ;

//             cout << ch << " ";

//             col = col + 1 ;
//         }
//         cout << endl; 
//         row = row + 1 ;
//     } 
// }

/*

Enter the value of n : 5
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

*/


//          Pattern -13

// #include <iostream>
// using namespace std;
// int main() {
//     int n ; 
//     cout << "Enter the value of n : " ; cin >> n ;

//     int row = 1;
//     int i = 0;

//     while ( row <= n ) {

//         int col = 1;
        
//         while ( col <= n ) {

//             char ch = 'A' + i ;

//             cout << ch << " ";
            
//             i = i + 1 ;
//             col = col + 1 ;
//         }
//         cout << endl;
//         row = row + 1 ;
//     }
// }

/*

Enter the value of n : 5
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 

*/


//          Pattern -14



#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n ;

    
}