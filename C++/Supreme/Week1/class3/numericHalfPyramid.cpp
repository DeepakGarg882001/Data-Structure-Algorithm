// Print a Numeric Half Pyramid whith the help of loops
// eg:
//   1 
//   1 2
//   1 2 3
//   1 2 3 4
//   1 2 3 4 5 

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

        for (int colNumber = 0; colNumber < rowNumber+1; colNumber++)
        {
            
                cout << " " << colNumber+1 << " ";
           
        }
        cout << endl;
    }
}