// Print a Fancy Pattern whith the help of loops
// eg:

// 3
// 44
// 555
// 6666
// 555
// 44
// 3 


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
        int value = rowNumber+3;
        for(int col=0 ; col<rowNumber+1;col++){
            cout <<value;

        }
        cout << endl;

    }
     for (int rowNumber = 1; rowNumber < row; rowNumber++)
    {     
        int value =row- rowNumber +2;
        for(int col=0 ; col<row-rowNumber;col++){
            cout <<value;

        }
        cout << endl;

    }
}