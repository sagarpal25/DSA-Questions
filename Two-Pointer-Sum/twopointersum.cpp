#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Brute Force approach

    // vector<int> v = {4, 9, 18, 27, 31};
    // int n = v.size();
    // int target = 45;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] + v[j] == target)
    //         {
    //             cout << i + 1 << " " << j + 1;
    //             return 0;
    //         }
    //     }
    // }
    // cout << -1;

    // Two pointer approach

    // vector<int> nums = {3, 2, 4};
    vector<int> nums = {4, 9, 18, 27, 31};
    int n = nums.size();
    int target = 22;
    vector<int> ans;
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (nums[start] + nums[end] == target)
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            break;
            // return ans;
        }
        else if (nums[start] + nums[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }
}