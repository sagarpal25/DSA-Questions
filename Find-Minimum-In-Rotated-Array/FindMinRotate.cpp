#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 6, 1, 2, 3};
    int n = v.size();
    if(v[0]<=v[n-1]){
        cout<<v[0];
        return 0;
    }
    int minElement;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
       
        if (v[mid] >= v[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid-1;
            minElement = v[mid];
        }
    }
    cout<<minElement;
}