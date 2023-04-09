// Print a Half Pyramid whith the help of loops
// eg:
//   * 
//   * *
//   * * *
//   * * * *
//   * * * * * 

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
            
                cout << " * ";
           
        }
        cout << endl;
    }
}