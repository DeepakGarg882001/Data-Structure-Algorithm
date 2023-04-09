// check a given triangle is valid or not

#include <iostream>
using namespace std;

int main()
{

    int base, height, hypo;

    cout << "Enter the value of Base of a triangle : ";
    cin >> base;

    cout << "Enter the value of Height of a triangle : ";
    cin >> height;

    cout << "Enter the value of Hypotaneous of a triangle : ";
    cin >> hypo;

    if (base + hypo < height)
    {
        cout << "It is not a Valid Triangle";
    }
    else if (base + height < hypo)
    {
        cout << "It is not a Valid Triangle";
    }
    else if (height + hypo < base)
    {
        cout << "It is not a Valid Triangle";
    }
    else
    {
        cout << "It may be a Valid Triangle";
    }
}