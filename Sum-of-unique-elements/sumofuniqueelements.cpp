#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2};
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (v[i] == v[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            sum += v[i];
        }
    }
    cout << sum;
}