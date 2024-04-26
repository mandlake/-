#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> pokemon;
    vector<string> names;
    vector<string> queries;
    vector<string> results;

    /**
     * pokemon 도감 삽입
    */
    for(int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        pokemon[name] = i + 1;
        names.push_back(name);
    }

    /**
     * 문제 삽입
    */
    while (m--)
    {
        string query;
        cin >> query;
        queries.push_back(query);
    }

    /**
     * 문제 중 숫자면 포켓몬 이름을, 아니면 도감 번호를 출력
    */
    for (const string& query : queries) 
    {
        if(isdigit(query[0]))
        {
            int number = stoi(query);
            results.push_back(names[number - 1]);
        } 
        else
        {
            results.push_back(to_string(pokemon[query]));
        }
    }

    /**
     * 최종 결과 출력
    */
    for(const string& result : results)
    {
        cout << result << '\n';
    }
}