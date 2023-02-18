// Print a Floyds Triangle Pattern whith the help of loops
// eg:

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21 
// 22 23 24 25 26 27 28



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
    int value =1;
    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
         for(int col=0;col<rowNumber+1;col++){
            cout << value<<" ";
            value++;
         }
         cout << endl;
    }
}