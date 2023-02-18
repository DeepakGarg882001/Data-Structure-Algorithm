// Print a Numeric Hollow Half Pyramid whith the help of loops
// eg:

//   1 
//   1 2
//   1   3
//   1     4
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
      
       for(int col =0; col<rowNumber+1;col++){
         
         if(col == 0 || col== rowNumber || rowNumber==row-1){
            cout << " "<< col+1<<" ";
         }else{
            cout << "   ";
         }

      }
       cout << endl;
       
    }
}