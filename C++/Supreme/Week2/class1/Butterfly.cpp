// Print a Butterfly Pattern whith the help of loops
// eg:

//  *                 * 
//  * *             * *
//  * * *         * * *
//  * * * *     * * * *        
//  * * * * * * * * * * 
//  * * * * * * * * * * 
//  * * * *     * * * *        
//  * * *         * * *
//  * *             * *
//  *                 * 




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
       
       for(int col = 0 ; col<row*2;col++){
             
             if(col == 0 || col <= rowNumber || col ==(row*2)-1 || col >=(row*2)-1-rowNumber){
                cout << " * ";
             }else{
                cout <<"   ";
             }

       }
       cout << endl;
    }

     for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
       
       for(int col = 0 ; col<row*2;col++){
             if(col ==0 || rowNumber==0 || col==(row*2)-1){
               cout << " * ";
             }
             else if(col>= row-rowNumber && col <row+rowNumber){
                cout << "   ";
             }else{
                cout <<" * ";
             }

       }
       cout << endl;
    }


}