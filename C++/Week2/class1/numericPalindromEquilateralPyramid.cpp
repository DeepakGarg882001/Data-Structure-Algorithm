// Print a Numeric Palindrom Equilateral Pyramid whith the help of loops
// eg:
//           1 
//         1 2 1
//       1 2 3 2 1
//     1 2 3 4 3 2 1
//   1 2 3 4 5 4 3 2 1 

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
        for(int spaces =0;spaces<row-rowNumber-1;spaces++){
            cout << "   ";
        }

        for(int col=0; col < (rowNumber*2)+1; col++){
               
               if(col<=rowNumber){
                cout<<" "<< col+1 <<" ";
               }else if(col>rowNumber){
                cout <<" " << (rowNumber+1) - (col-rowNumber) << " ";
               }

        } 
        cout << endl;
    }
}