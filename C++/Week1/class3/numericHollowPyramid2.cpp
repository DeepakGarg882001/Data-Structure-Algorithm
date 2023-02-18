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

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
        for (int spaces=0;spaces<(row-rowNumber-1);spaces++){
            cout << "   ";
        }
         
          
        for (int colFilled = 1; colFilled <=(rowNumber*2)+1; colFilled++)
        {
            
               if(colFilled ==1){
                cout << " "<< colFilled <<" ";
               }
               else if(colFilled == (rowNumber*2)+1){
                   cout << " " << rowNumber+1 <<" ";
               }else if(rowNumber == row-1 && colFilled%2 ==1){
                  cout <<" "<< (colFilled/2) +1<<" ";
               }else{
                cout << "   ";
               }
           
        }
        
        cout << endl;
    }
   
}