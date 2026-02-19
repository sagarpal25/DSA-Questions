#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    // brute force approach O(n)

    vector<int> v = {3, 7, 10, 14, 17, 19, 21, 19, 14};
    // int max = INT_MIN;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (max < v[i])
    //     {
    //         max = v[i];
    //     }
    // }
    // cout << max;

    // optimize but TLE

    // int n = v.size();
    // int start = 0, end = n - 1;
    // while (start <= end)
    // {
    //     int mid = start + (end - start) / 2;
    //     if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
    //     {
    //         cout << mid << " --> " << v[mid];
    //         return 0;
    //     }
    //     else if (v[mid] > v[mid - 1])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid - 1;
    //     }
    // }

    // optimize approach right way

    int n = v.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = end + (start - end) / 2;
        if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        {
            cout << mid << " --> " << v[mid];
            return 0;
        }
        else if (v[mid] > v[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid; // or  changes
        }
    }
}