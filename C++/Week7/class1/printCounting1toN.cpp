// Write a Algorithm to Print Counting from 1 to N using recursion
// eg: N=8
// output: 1 2 3 4 5 6 7 8

#include <iostream>
using namespace std;

void printIncCounting(int num)
{

    // base condition
    if (num == 0)
    {
        return;
    }

    // Recursive Call
    printIncCounting(num - 1);

    // processing part
    cout << num << "  ";
}

int main()
{

    int num;
    cout << "Enter the value of N : ";
    cin >> num;

    cout << endl;

    printIncCounting(num);

    cout << endl;
    
    return 0;

}