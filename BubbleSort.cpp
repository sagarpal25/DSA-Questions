#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // simple approach
    vector<int> v = {2, 4, 5, 3, 6};
    int n = v.size();
    // cout << v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    // Optimize approach

    vector<int> v2 = {5, 3, 7, 9};
    int m = v2.size();
    for (int i = 0; i < m - 1; i++)
    {
        bool isswapped = false;
        for (int j = 0; j < m - i - 1; j++)
        {
            if (v2[j] > v2[j + 1])
            {
                int temp = v2[j];
                v2[j] = v2[j + 1];
                v2[j + 1] = temp;
                isswapped = true;
            }
        }
        if (isswapped = false)
        {
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << v2[i] << " ";
    }
}