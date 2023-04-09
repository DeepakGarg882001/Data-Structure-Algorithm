// Print a Numeric Hollow Pyramid whith the help of loops
// eg:
//           1 
//         1   2 
//       1       3 
//     1           4 
//   1   2   3   4   5  

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

    for (int rowNumber = 0; rowNumber < row-1; rowNumber++)
    {
        for (int spaces=0;spaces<(row-rowNumber-1);spaces++){
            cout << "   ";
        }
         
          
        for (int colFilled = rowNumber; colFilled <(rowNumber+1) && rowNumber!=0; colFilled++)
        {
            
                cout << " 1 ";
           
        }
        for (int innerSpaces = 0; innerSpaces <(rowNumber*2)-1; innerSpaces++)
        {
            
                cout << "   ";
           
        }
        for (int colFilled = rowNumber; colFilled <(rowNumber+1); colFilled++)
        {
            
                cout << " "<<colFilled+1<<" ";
           
        }
        cout << endl;
    }
    for(int lastRowCol =0;lastRowCol<row;lastRowCol++){
        cout << " " << lastRowCol+1 << " ";
        cout << "   ";
    }
}