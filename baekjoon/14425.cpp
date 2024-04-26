#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string value;

    vector<string> v;
    while (n--)
    {
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());
    
    int count = 0;

    while(m--)
    {
        cin >> value;
        if(binary_search(v.begin(), v.end(), value))
        {
            count++;
        }
    }

    cout << count;
}