#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string human, status;
    map<string, string> enter;
    for(int i = 0; i < n; i++)
    {
        cin >> human >> status;
        if(status == "enter")
        {
            enter.emplace(human, human);
        } else
        {
            enter.erase(human);
        }
    }
    
    vector<string> reverseOrder;

    for(auto const& pair : enter)
    {
        reverseOrder.push_back(pair.first);
    }

     for(auto it = reverseOrder.rbegin(); it != reverseOrder.rend(); ++it)
    {
        cout << *it << '\n';
    }
}