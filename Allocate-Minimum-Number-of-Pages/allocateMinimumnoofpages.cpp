#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &v, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxAllowedPages)
        {
            return false;
        }
        if (pages + v[i] <= maxAllowedPages)
        {
            pages += v[i];
        }
        else
        {
            students++;
            pages = v[i];
        }
    }
    return students <= m;
}

int allocateBooks(vector<int> &v, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    int ans = -1;
    int start = 0, end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(v, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int>v = {2,1,3,4};
    vector<int> v = {15, 17, 20};
    int n = 3, m = 2;
    cout << allocateBooks(v, n, m);
    return 0;
}