// Print a sloid and Hollow Square whith the help of loops
// eg:

//   *  *  *  *       *  *  *  *
//   *  *  *  *       *        *
//   *  *  *  *       *        *
//   *  *  *  *       *  *  *  *

#include<iostream>
using namespace std;

int main(){
     
     
     int row;
    // int col;

    cout << "Enter the Number of Rows : ";
    cin >> row;

    // cout << "Enter the Number of Columns : ";
    // cin >> col;

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
         //solid square
         for(int col=0 ; col< row;col++){
              cout << " * ";
         }

         // spaces
         for(int spaces =0 ; spaces<6; spaces++){
            cout << "  ";

         }

         //hollow square
         for(int col =0; col<row;col++){

            if( col == 0 ||  col == row-1  || rowNumber==0  ||  rowNumber==row-1 ){
                cout << " * ";
            }
            else{
                cout << "   ";
            }

         }

         cout << endl;

    }

}