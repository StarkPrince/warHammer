#include <iostream>
#include <stack>
#include <map>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (i == '(' || i == '{' || i == '[')
        {
            continue;
        }
        else
        {
            if (st.top())
        }
    }
}