#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {3, 2, 1, 5, 7, 8};
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    vector<int> ans(3);

    ans[0] = INT32_MAX;
    int leftSum = 0, rightSum;
    for (int i = 0; i < n - 1; i++)
    {
        leftSum += v[i];
        rightSum = sum - leftSum;

        if (abs(leftSum - rightSum) > ans[0])
        {
            continue;
        }
        if (rightSum > leftSum)
        {
            ans[2] = 1;
            ans[0] = rightSum - leftSum;
            ans[1] = i + 2;
        }
        else
        {
            ans[2] = 2;
            ans[0] = leftSum - rightSum;
            ans[1] = i + 2;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
}