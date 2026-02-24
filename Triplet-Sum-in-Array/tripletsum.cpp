#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // Brute force approach
    // vector<int> v = {1, 2, 10, 34, 25};
    // int n = v.size();
    // int target = 69;
    // bool result = false;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             if (v[i] + v[j] + v[k] == target)
    //             {
    //                 result = true;
    //             }
    //         }
    //     }
    // }
    // cout << result;

    vector<int> v = {1, 4, 17, 10, 34, 7};
    sort(v.begin(), v.end());
    int n = v.size();
    int target = 61;
    bool found = false;
    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1, end = n - 1;
        int newTarget = target - v[i];
        while (start < end)
        {
            if (v[start] + v[end] == newTarget)
            {
                found = true;
                break;
            }
            else if (v[start] + v[end] < newTarget)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    if (found == false)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}
