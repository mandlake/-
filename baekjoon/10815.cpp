#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int len, value;
    cin >> len;
    vector<int> arr;

    while (len--)
    {
        cin >> value;
        arr.push_back(value);
    }
    
    sort(arr.begin(), arr.end());

    cin >> len;

    while (len--)
    {
        cin >> value;
        cout << (binary_search(arr.begin(), arr.end(), value) ? 1 : 0) << ' ';
    }
    
}
