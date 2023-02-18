// Print a Fancy Pattern whith the help of loops
// eg:

// *
// * 1 *
// * 1 2 1 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *
// *


#include <iostream>
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
        for(int col=0;col<rowNumber+1 ; col++){
                
                if(col ==0){
                    cout <<"* ";
                }else{
                    cout << col <<" ";
                }
        } 

        for(int reverse = rowNumber; reverse>0;reverse--){
            if(reverse==1){
                cout <<"* ";
            }else{
                cout << reverse-1<<" ";
            }
        }
        cout << endl;
    }

    for (int rowNumber = 0; rowNumber < row-1; rowNumber++)
    {
        for(int col=0;col<row-rowNumber-1 ; col++){
                
                if(col ==0){
                    cout <<"* ";
                }else{
                    cout << col <<" ";
                }
        } 

        for(int reverse = row-2-rowNumber; reverse>0;reverse--){
            if(reverse==1){
                cout <<"* ";
            }else{
                cout << reverse-1<<" ";
            }
        }
        cout << endl;
    }

}