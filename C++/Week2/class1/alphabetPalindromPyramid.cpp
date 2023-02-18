// Print a Alphabetic Palindrom Pyramid whith the help of loops
// eg:

// A
// A B A
// A B C B A 
// A B C D C B A
// A B C D E D C B A

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
        
         for(int col =0; col<(rowNumber*2)+1;col++){
            char a= 'A';
            if(col<=rowNumber){
                a = a+col;
             cout <<" "<<a <<" ";
            }else{
                a= a+rowNumber - (col-rowNumber);
             cout <<" "<<a <<" ";
            }
         }
         cout << endl;
    }
}