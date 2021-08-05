#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <stack>
#include <queue>
using namespace std;

string join(vector<string> v, char separator)
{
    string ss;
    for (int i = 0; i < v.size(); i++)
        ss += v[i] + separator;
    return ss;
}
string simplifyPath(string path)
{
    istringstream iss(path);
    vector<string> tokens;

    string token;
    while (getline(iss, token, '/'))
    {
        if (token == "." || token == "")
            continue;
        else if (token == "..")
        {
            if (!tokens.empty())
                tokens.pop_back();
        }
        else
            tokens.push_back(token);
    }
    return tokens.empty() ? "/" : "/" + join(tokens, '/');
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    string path;
    cin >> path;
    cout << simplifyPath(path) << endl;
}