#include <iostream>
using namespace std;

bool searchTarget(int col, int arr[][6], int row, int target)
{
    bool var = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (target == arr[i][j])
            {
                var = true;
            }
        }
    }
    return var;
}

int main()
{

    int row, col;
    cout << "How many Rows you want in the 2D Array : ";
    cin >> row;
    cout << "How many Col you want in the 2D Array : ";
    cin >> col;

    int Arr[6][6] = {0};

    // take input from user

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Please Enter the Value at Arr[" << i << "] [" << j << "] : ";
            cin >> Arr[i][j];
        }
        cout << endl;
    }

    // now print the Array  Also print the sum Row wise

    cout << "Array is : [ ";

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            cout << Arr[i][j] << " ";
            sum = sum + Arr[i][j];
        }
        cout << "    "
             << "Sum of this row is : " << sum << endl;
    }
    cout << " ]" << endl;

    // ask the user which number he wants to find from this 2D array

    int target;
    cout << "Please Enter a Number which you want to Search : ";
    cin >> target;

    bool result = searchTarget(col, Arr, row, target);

    if (result == 1)
    {
        cout << "Target Found ";
    }
    else
    {
        cout << "Target Not Found ";
    }

    int count = 0;

    int rows = 0;
    for (int cols = 0; cols < col; cols++)
    {

        while (rows < row && rows >= 0)
        {
            cout << Arr[rows][cols] << " ";

            if (count == 0)
            {
                rows++;
            }
            else if (count == 1)
            {
                rows--;
            }
        }
        if (count == 0)
        {
            count = count + 1;
            rows = rows - 1;
        }
        else if (count == 1)
        {
            count = count - 1;
            rows = rows + 1;
        }
    }

    return 0;
}