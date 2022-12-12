
//          Pattern -6

#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n;

    int row=1;

    while ( row<=n ) {
        
        int col=1;
        while ( col<=row ) {
            cout << "* ";
            col = col+1;
        }
        cout << endl;
        row = row+1;

    }
}


/*

Enter the value of n : 5
* 
* * 
* * * 
* * * * 
* * * * * 

*/


//          Pattern -7

#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n;

    int row=1;
    
    while ( row<=n ) {

        int col=1;
        while ( col<=row ) {

            cout << col << " ";
            col = col+1;
        }
        cout << endl;
        row = row+1;
    }
}


/*

Enter the value of n : 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/


//      Pattern -8


#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n;
    int row=1;
    int count=1;

    while ( row <= n ) {

        int col=1;

        while ( col <= row ) {

            cout << count << " ";
            count = count+1;
            col = col+1;
        }
        cout << endl;
        row = row+1;
    }
}


/*

Enter the value of n : 4
1 
2 3 
4 5 6 
7 8 9 10 

*/


//          Pattern -9



#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n : " ; cin >> n;

    int row=1;


    while ( row <= n ) {

        int col=1;
        int value = row;

        
        while ( col <= row ) {

            cout << value << " " ;
            value = value + 1 ; 

            col = col + 1 ;

        }
        cout << endl;
        row = row + 1 ;
    }
}

/*

Enter the value of n : 4
1 
2 3 
3 4 5 
4 5 6 7 

*/

//              Pattern -9 Alternative method (comment on youtube - subham kumar padhy) 

#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n ;

    int row=1;
    
    while ( row <= n ) {

        int col = row ;
        
        while ( col < 2*row ) {
            cout << col << " ";
            col = col + 1 ;
        }
        cout << endl;
        row = row + 1 ;
    }
}

/*

Enter the value of n : 4
1 
2 3 
3 4 5 
4 5 6 7

*/


//          Pattern -10

#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n;

    int row = 1 ;

    while ( row <= n ) {

        int col = 1 ;
        int count = row;
        while (col <= row ) {
            cout << count << " ";
            count = count - 1 ;
            col = col + 1 ;
        }
        cout << endl;
        row = row + 1 ;
    }

}

/*

Enter the value of n : 4
1 
2 1 
3 2 1 
4 3 2 1  

*/


//          Pattern -10 Alternative 

#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the value of n : " ; cin >> n;

    int row =1 ;

    while ( row <= n ) {

        int col = 1 ;

        while ( col <= row ) {

            cout << (row - col + 1) << " ";
            col = col + 1 ; 
        }
        cout << endl;
        row = row + 1 ;
    }
}

/*

Enter the value of n : 4
1 
2 1 
3 2 1 
4 3 2 1 

*/