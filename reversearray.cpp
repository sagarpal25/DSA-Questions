#include <iostream>
#include <vector>
using namespace std;

void reversearr(vector<int> &v, int n)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    int n = v.size();
    reversearr(v, n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}