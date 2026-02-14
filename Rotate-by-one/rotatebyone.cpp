#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // // Right rotate by one

    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }

    v[0] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // Left rotate by one

    vector<int> v2 = {1, 2, 3, 4, 5};
    int n1 = v2.size();
    int temp1 = v2[0];
    for (int i = 0; i < n1 - 1; i++)
    {
        v2[i] = v2[i + 1];
    }

    v2[n1 - 1] = temp1;
    for (int i = 0; i < n1; i++)
    {
        cout << v2[i] << " ";
    }
}