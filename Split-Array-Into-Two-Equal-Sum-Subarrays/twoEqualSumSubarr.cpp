#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v = {5, -5};
    vector<int> v = {1, 2, 3, 4, 5, 5};
    int n = v.size();
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += v[i];
    }
    if (totalSum % 2)
    {
        cout << "false";
        return 0;
    }
    int target = totalSum / 2;
    int prefixSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefixSum += v[i];
        if (prefixSum == target)
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";
}