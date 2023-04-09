// Print a Hollow rectangle whith the help of loops
// eg:
//   * * * * * * * *
//   *             *
//   *             *
//   * * * * * * * *

#include <iostream>
using namespace std;

int main()
{

    int row;
    int col;

    cout << "Enter the Number of Rows : ";
    cin >> row;

    cout << "Enter the Number of Columns : ";
    cin >> col;

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {

        for (int colNumber = 0; colNumber < col; colNumber++)
        {
            if (rowNumber == 0 || rowNumber == row - 1 || colNumber == 0 || colNumber == col - 1)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}