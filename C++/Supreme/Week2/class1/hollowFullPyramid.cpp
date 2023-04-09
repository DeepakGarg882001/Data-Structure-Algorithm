// Print a Full Pyramid whith the help of loops
// eg:


//           * 
//         *   *
//       *       *
//     *           *
//   * * * * * * * * * 

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
        for(int spaces =0; spaces<row-rowNumber-1 ; spaces++ ){
          cout << "   ";
        }

        for(int col=0; col< (rowNumber*2)+1; col++){

            if(col==0 || col == rowNumber*2 || rowNumber== row-1){
                cout << " * ";
            }else{
                cout << "   ";
            }

        }
        cout<<endl;

    }
}