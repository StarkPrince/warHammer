#include <iostream>
#include <stack>
#include <queue>
#include <map>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (char i : s)
    {
        switch (i)
        {
        case '(':
        case '{':
        case '[':
            st.push(i);
            break;
        case ')':
            if (st.empty() || st.top() != '(')
                return false;
            st.pop();
            break;
        case '}':
            if (st.empty() || st.top() != '{')
                return false;
            st.pop();
            break;
        case ']':
            if (st.empty() || st.top() != '[')
                return false;
            st.pop();
            break;
        default:
            continue;
        }
    }
    return st.empty();
}

bool checkRetundancy(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (i != '(')
            st.push(i);
        else
        {
            bool operatorFound = false;
            while (!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    operatorFound = true;
                st.pop();
            }
            st.pop(); //poping the operator bracket after the loop is over
            if (!operatorFound)
                return true;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // string s = "((a+b)+(c))";
    // if (checkRetundancy(s))
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;
    queue<char> q;
    int freq[27] = {0};
    char ch;
    cin >> ch;
    while (ch != '.')
    {
        q.push(ch);
        freq[ch - 'a']++;
        while (!q.empty())
        {
            int idx = q.front() - 'a';
            if (freq[idx] > 1)
                q.pop();
            else
            {
                cout << q.front() << endl;
                break;
            }
        }
        if (q.empty())
            cout << -1 << endl;
    }
}