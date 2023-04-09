// Print a Fancy Pattern whith the help of loops
// eg:

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1



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
    
    int value =1;

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
        for(int col = 0; col<(rowNumber*2)+1; col++){
            if(col&1 ==1){
                cout <<"*";
            }else{
                cout << value;
                value++;
            }
        }
        cout << endl;
    }
    
    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {   
       int reverseValue = value-row+rowNumber;
        for(int col = 0; col<((row-rowNumber)*2)-1; col++){
            if(col&1 ==1){
                cout <<"*";
            }else{
                cout << reverseValue;
                reverseValue++;
                value--;
            }
        }
        cout << endl;
    }
}