#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define n 100

class stacks
{
    int *arr;
    int top;

public:
    stacks()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == (n - 1))
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Empty Stack" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Empty Stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty() return top == -1;
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    stacks st;
    st.push(5);
    st.push(3);
    st.push(1);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    return 0;
}
