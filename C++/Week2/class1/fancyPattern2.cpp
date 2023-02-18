// Print a Fancy Pattern whith the help of loops
// eg:

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1


#include <iostream>
using namespace std;

int main()
{

    int row;

    cout << "Enter the Number of Rows : ";
    cin >> row;

   

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {  
        int value = rowNumber+1;
        for(int col =0;col<(rowNumber*2) +1;col++){

                if(col%2==0){
                    cout << value;
                }else{
                    cout << "*";
                }     
        }
        cout<<endl;
    }
    for (int rowNumber = row; rowNumber > 0; rowNumber--)
    {  
        int value = rowNumber;
        for(int col =0;col<(rowNumber*2)-1;col++){

                if(col%2==0){
                    cout << value;
                }else{
                    cout << "*";
                }     
        }
        cout<<endl;

    }
}