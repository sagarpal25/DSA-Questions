#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 3, 3, 4};
    int n = v.size();
    int start = 0;
    int end = n - 1;
    int index1 = -1;
    int target = 3;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            index1 = mid;
            end = mid - 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    start = 0, end = n - 1;
    int index2 = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            index2 = mid;
            start = mid + 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    vector<int> ans;
    ans.push_back(index1);
    ans.push_back(index2);
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }
}