#include <iostream>
#include <algorithm>
#include <map>
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

    for(auto const& pair : enter)
    {
        cout << pair.first << '\n';
    }
}