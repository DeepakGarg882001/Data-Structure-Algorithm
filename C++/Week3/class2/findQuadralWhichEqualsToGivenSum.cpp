// you are given an Array in Input and a Interger value Sum .
// Find a Quadral of Element using given array element whos sum is equal to Given Sum
// use a element only one time
// eg: arr[] = { 1,7,4,6,3,8,2,5}
//     sum = 10

// output: (1,2,3,4) -> 1+6+2 = 10  , order does not matter , (2,3,1,4) is also correct

#include <iostream>
#include <vector>
using namespace std;

void printQuadral(vector<int> &ans)
{

    for (int index = 0; index < ans.size(); index += 4)
    {
        cout << " (" << ans[index] << "," << ans[index + 1] << "," << ans[index + 2]<< "," << ans[index + 3] << ") ";
    }
}

void findQuadral(vector<int> &arr, int &sum, vector<int> &ans)
{

    // run loop 1
    for (int round = 0; round < arr.size() - 3; round++)
    {

        // run loop 2
        for (int mid = round + 1; mid < arr.size() - 2; mid++)
        {

            // run loop 3
            for (int next = mid + 1; next < arr.size() - 1; next++)
            {

                // run loop 4
                for (int index = next + 1; index < arr.size(); index++)
                {

                    if (arr[round] + arr[mid] +arr[next]+ arr[index]  == sum)
                    {
                        ans.push_back(arr[round]);
                        ans.push_back(arr[mid]);
                        ans.push_back(arr[next]);
                        ans.push_back(arr[index]);
                        break;
                    }
                }
            }

          
        }
    }
}

int takeSum()
{

    int sum;
    cout << "Enter the value of Sum : ";
    cin >> sum;

    return sum;
}

void takeInput(vector<int> &arr)
{

    for (int index = 0; index < arr.size(); index++)
    {

        cout << "Enter the value of Arr[ " << index << " ] : ";
        cin >> arr[index];
    }
}

int main()
{

    int size;
    cout << "Enter the size of Array : ";
    cin >> size;

    // create a vector of this size;
    vector<int> arr(size);

    // takeInput from user
    takeInput(arr);

    // get sum from user
    int sum = takeSum();

    // create a vector to store Quadrals
    vector<int> ans;

    // find Quadrals
    findQuadral(arr, sum, ans);

    if (ans.size() == 0)
    {
        cout << "NO Quadral Found" << endl;
    }
    else
    {
        printQuadral(ans);
    }

    return 0;
}