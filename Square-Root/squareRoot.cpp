#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 49;

    // simple approacn linear  search O(n)

    // if (n == 0)
    // {
    //     cout << 0;
    //     return 0;
    // }
    // int i = 1;
    // while (i <= n / i) // i*i<=n
    // {
    //     i++;
    // }

    // cout << i - 1;

    // optimize approach binary search O(log n)

    if (n == 0 || n == 1)
    {
        cout << n;
        return 0;
    }

    int start = 0, end = n;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == n / mid)
        {
            cout << mid;
            return 0;
        }
        else if (mid < n / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans;
}