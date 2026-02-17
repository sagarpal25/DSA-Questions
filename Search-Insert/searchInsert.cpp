#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 4, 8, 11, 12, 13};
    int n = v.size();
    int start = 0, end = n - 1;
    // int target = 3;
    int target = 15;
    int index = n;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            index = mid;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            index = mid;
        }
    }
    cout << index;
}