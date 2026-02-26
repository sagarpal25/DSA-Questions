#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {-10, 20};
    int n = v.size();
    int diff = 30;
    sort(v.begin(), v.end());
    int start = 0, end = 1;
    while (start < end && end < n)
    {
        if (v[end] - v[start] == diff)
        {
            cout << 1;
            return 0;
        }
        else if (v[end] - v[start] < diff)
        {
            end++;
        }
        else
        {
            start++;
        }
    }
    cout << 0;
}