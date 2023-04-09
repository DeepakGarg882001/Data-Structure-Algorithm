// Print a Numeric Full Pyramid whith the help of loops
// eg:
//           1 
//         2 3 2
//       3 4 5 4 3
//     4 5 6 7 6 5 4
//   5 6 7 8 9 8 7 6 5 

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
        for (int spaces=0;spaces<(row-rowNumber-1);spaces++){
            cout << "   ";
        }

        for (int colFilled = rowNumber+1; colFilled <(((rowNumber+1)*2)); colFilled++)
        {
            
                cout << " "<< colFilled <<" ";
           
        }
        for (int reverseNum = ((rowNumber+1)*2)-2; reverseNum >rowNumber; reverseNum--)
        {
            
                cout << " "<< reverseNum <<" ";
           
        }
        cout << endl;
    }
}