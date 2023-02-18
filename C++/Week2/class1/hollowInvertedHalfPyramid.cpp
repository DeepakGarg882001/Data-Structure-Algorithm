// Print a Hollow Inverted Half Pyramid whith the help of loops
// eg:

//   * * * * * 
//   *     *
//   *   *
//   * *
//   * 

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
        for(int col =0; col<row-rowNumber;col++){
              
              if(col==0 || col== row-rowNumber-1 || rowNumber==0){
                cout << " * ";
              }else{
                cout << "   ";
              }

        }
        cout << endl;
       
    }
}