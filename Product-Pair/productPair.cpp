#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // Brute force approach
    //  vector<int> v = {10, 20, 9, 40};
    //  int n = v.size();
    //  int target = 400;
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      for (int j = i + 1; j < n; j++)
    //      {
    //          if (v[j] * v[i] == target)
    //          {
    //              cout << "true";
    //              return 0;
    //          }
    //      }
    //  }
    //  cout << "false";

    // vector<int> v = {-10, 20, 9, -40};
    // int target = 30;

    vector<int> v = {-5, -4, 2, 3};
    int target = 20;

    int mid = -1;
    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            mid = i;
        }
        else
        {
            break;
        }
    }
    if (target >= 0)
    {
        int start = 0, end = mid;
        while (start < end)
        {
            if (v[start] * v[end] == target)
            {
                cout << "true";
                return 0;
            }
            else if (v[start] * v[end] < target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }

        start = mid + 1, end = n - 1;
        while (start < end)
        {
            if (v[start] * v[end] == target)
            {
                cout << "true";
                return 0;
            }
            else if (v[start] * v[end] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    else
    {
        int start = 0, end = mid + 1;
        while (start <= mid && end < n)
        {

            if (v[start] * v[end] == target)
            {
                cout << "true";
                return 0;
            }
            else if (v[start] * v[end] > target)
            {
                end++;
            }
            else
            {
                start++;
            }
        }
    }
    cout << "false";
}