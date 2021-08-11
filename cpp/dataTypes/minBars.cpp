#include <iostream>
#include <unordered_set>
#include <climits>
using namespace std;

string s = "thequickbrownfoxjumpsoverthelazydog";

string words[] = {"the", "fox", "thequickbrownfox", "jumps", "lazy", "dog",
                  "highbridge", "the", "over", "bridge", "high", "tall", "quick",
                  "brown", "jumpsover"};

int minBarHelper(string s, string words[], int idx, unordered_set<string> &m)
{
    if (s[idx] == '\0')
        return 0;
    int ans = INT_MAX;
    string current_string = "";
    for (int i = idx; s[i] != '\0'; i++)
    {
        current_string += s[i];
        if (m.find(current_string) != m.end())
        {
            int remaining_ans = minBarHelper(s, words, i + 1, m);
            if (remaining_ans != -1)
                ans = min(ans, remaining_ans + 1);
        }
    }
    if (ans == INT_MAX)
        return 0;
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    unordered_set<string> m;
    for (string i : words)
        m.insert(i);
    //recursive helper function
    int output = minBarHelper(s, words, 0, m);
    cout << output - 1 << endl;
}