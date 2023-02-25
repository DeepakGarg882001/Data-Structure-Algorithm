#include <bits/stdc++.h>
using namespace std;
int main()
{
      // sort 0 's  and 1's
      vector<int> arr { 0, 1, 0, 0, 1, 0, 1, 0, 1 };
      int s = 0;
      int e = arr.size() - 1;
      int i = 0;
      while (i != e)
      {
            if (arr[i] == 0)
            {
                  swap(arr[i], arr[s]);
                  s++;
                  i++;
            }
            else
            {
                  swap(arr[e], arr[i]);
                  e--;
            }
      }

      for (int i = 0; i < arr.size(); i++)
      {
            cout << arr[i] << " ";
      }

    return 0;
}
