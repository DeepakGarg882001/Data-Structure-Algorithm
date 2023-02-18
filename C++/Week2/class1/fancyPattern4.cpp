// Print a Fancy Pattern whith the help of loops
// eg:

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****


#include <iostream>
using namespace std;

int main()
{

    int row;
    // int col;

    cout << "Enter the Number of Rows : ";
    cin >> row;

    // cout << "Enter the Number of Columns : ";
    // cin >> col;

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
        for(int stars =rowNumber; stars<row+3;stars++){
            cout << "*";
        }
        for(int col = 0; col<(rowNumber*2)+1 ; col++){
            if(col&1==1){
                cout <<"*";
            }else{
                cout <<rowNumber+1;
            }
        }
         for(int stars =rowNumber; stars<row+3;stars++){
            cout << "*";
        }
        cout << endl;

    }
}