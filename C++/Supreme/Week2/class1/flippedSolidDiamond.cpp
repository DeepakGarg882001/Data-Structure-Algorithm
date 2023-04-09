// Print a Flipped Solid Diamond whith the help of loops
// eg:
// * * * * * *  * * * * * *  
// * * * * *      * * * * *  
// * * * *          * * * *  
// * * *              * * *  
// * *                  * *  
// *                      *
// * *                  * *   
// * * *              * * *   
// * * * *          * * * * 
// * * * * *      * * * * * 
// * * * * * *  * * * * * *  


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
           for(int col=0; col<=row*2 ;col++){
                 
                 if(col < row-rowNumber || col > ((2*row) - row+rowNumber) ){
                    cout <<" * ";
                 }else{
                    cout <<"   ";
                 }

           }
           cout <<endl;
    }
    for (int rowNumber = 0; rowNumber < row-1; rowNumber++)
    {
           for(int col=0; col<=row*2 ;col++){
                 
                 if(col < rowNumber+2 || col >= ((2*row) -1-rowNumber) ){
                    cout <<" * ";
                 }else{
                    cout <<"   ";
                 }

           }
           cout <<endl;
    }
}