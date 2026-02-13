#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 5, 4, 7, 8};
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minpos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minpos])
            {
                minpos = j;
            }
        }
        int temp = v[i];
        v[i] = v[minpos];
        v[minpos] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}