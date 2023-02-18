// Print a Solid Diamond whith the help of loops
// eg:
//           * 
//         *   *
//       *   *   *
//     *   *   *   *
//   *   *   *   *   * 
// *   *   *   *   *   *
//   *   *   *   *   * 
//     *   *   *   *
//       *   *   *
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
        for(int spaces =0; spaces<(row-rowNumber-1)*2 ; spaces++){
            cout << " ";
        }

        // stars
        for(int col =0; col< (rowNumber*2)+1 ; col++){
                 if(col&1 ==1){
                    cout <<" ";
                 }else{
                    cout <<" * ";
                 }
        }
        cout << endl;
    }

    for (int rowNumber = 1; rowNumber < row; rowNumber++)
    {
        // spaces
        for(int spaces =0; spaces<rowNumber*2 ; spaces++){
            cout << " ";
        }

        // stars
        for(int col =0; col< (row-rowNumber)*2-1 ; col++){
                 if(col&1 ==1){
                    cout <<" ";
                 }else{
                    cout <<" * ";
                 }
        }
        cout << endl;
    }
}