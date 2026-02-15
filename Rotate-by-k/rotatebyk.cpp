#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Not optimize

    // vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // int n = v.size();
    // int k = 3;
    // while (k)
    // {
    //     int temp = v[n - 1];
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         v[i + 1] = v[i];
    //     }
    //     v[0] = temp;

    //     k--;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // Best approach but extra space

    // vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // int n = v.size();
    // int k = 3;
    // int temp[n];
    // for (int i = 0; i < n; i++)
    // {
    //     temp[(i + k) % n] = v[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = temp[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // More optimize approach

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = v.size();
    int k = 3;
    k = k % n;
    if (!k)
        return 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    i = 0, j = k - 1;
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    i = k;
    j = n - 1;
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}