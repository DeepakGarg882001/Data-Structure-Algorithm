// Print a Pascal Triangle Pattern whith the help of loops
// eg:

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 
// 1 5 10 10 5 1   
// 1 6 15 20 15 6 1



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
        int c= 1;
        for(int col = 0;col<rowNumber+1;col++){
            cout <<" "<<c<<" ";
            c= c*(rowNumber-col)/(col+1);
        }
        cout<<endl;

    }
}