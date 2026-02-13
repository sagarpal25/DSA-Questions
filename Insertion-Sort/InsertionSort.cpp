#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 8, 3, 9, 2};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (v[j] < v[j - 1])
            {
                int temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
            }
            else
            {
                break;
            }
        }
    }
    for (int x : v)
    {
        cout << x << " ";
    }
}