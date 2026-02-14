#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // simple approach

    // vector<int> v = {4, 2, 1, 5};
    // vector<int> v = {4, 1, 3};

    // int n = v.size();
    // for (int i = 1; i < n + 1; i++)
    // {
    //     bool found = false;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[j] == i)
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (found == false)
    //     {
    //         //cout << i;
    //     }
    // }

    // Optimize approach

    vector<int> v = {1, 2, 4, 5, 6, 3, 9, 7};
    int size = v.size();
    int n = size + 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += v[i];
    }
    long long totalsum = n * (n + 1) / 2;
    long long ans = totalsum - sum;
    cout << ans;
}