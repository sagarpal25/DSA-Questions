#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 5, 1, 0, 6, 0};
    int n = v.size();
    sort(v.begin(), v.end());
    int target = 7;
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int start = j + 1, end = n - 1, newTarget = target - v[i] - v[j];
            while (start < end)
            {
                if (v[start] + v[end] == newTarget)
                {
                    cout << "True";
                    return 0;
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
    }
    cout << "False";
}