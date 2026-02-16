#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    int n = v.size();
    int largest = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }
    }
    // cout << largest;
    int secondlargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == largest)
        {
            continue;
        }
        else if (v[i] > secondlargest)
        {
            secondlargest = v[i];
        }
    }
    cout << secondlargest;
}