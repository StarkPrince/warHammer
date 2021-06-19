#include <iostream>
#include <string.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    set<int> pass;
    for (int i = 0; i < intervals.size(); i++)
        for (int j = intervals[i][0]; j <= intervals[i][1]; j++)
            pass.insert(j);
    vector<int> passed;
    for (int i : pass)
        passed.push_back(i);
    sort(passed.begin(), passed.end());

    vector<vector<int>> answer;
    int mn = passed[0];
    for (int i = 1; i < passed.size(); i++)
    {
        if (passed[i] - passed[i - 1] == 1)
            continue;
        else
        {
            vector<int> vect;
            vect.push_back(mn);
            vect.push_back(passed[i - 1]);
            answer.push_back(vect);
            mn = passed[i];
        }
    }
    vector<int> vect;
    vect.push_back(mn);
    vect.push_back(passed[passed.size() - 1]);
    answer.push_back(vect);
    return answer;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    vector<vector<int>> thala;
    while (a--)
    {
        int r, s;
        cin >> r >> s;
        vector<int> temp;
        temp.push_back(r);
        temp.push_back(s);
        thala.push_back(temp);
    }
    vector<vector<int>> merged = merge(thala);
    for (auto i : merged)
    {
        for (int j : i)
        {
            cout << j;
        }
        cout << endl;
    }
}
