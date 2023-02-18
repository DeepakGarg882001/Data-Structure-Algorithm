// Print a  Hollow Diamond whith the help of loops
// eg:
//           * 
//         *   *
//       *       *
//     *           *
//   *               * 
// *                   *
//   *               * 
//     *           *
//       *       *
//         *   *
//           * 
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
        // spaces
         for(int space=0;space<row-rowNumber-1;space++){
             cout << "   ";
         }

         // stars
         for(int col =0 ; col< (2*rowNumber)+1;col++){ 
             if(col == 0 || col == 2*rowNumber){
                cout << " * ";
             }else{
                cout << "   ";
             }
         }
         cout << endl;
    }


     for (int rowNumber = 1; rowNumber < row; rowNumber++)
    {     
        // spaces
         for(int space=0;space<rowNumber;space++){
             cout << "   ";
         }

         // stars
         for(int col =0 ; col<= (row*2)-rowNumber;col++){
             if(col == 0 || col == (row-rowNumber)*2 -2 ){
                cout << " * ";
             }else{
                cout << "   ";
             }
         }
         cout << endl;
    }
}