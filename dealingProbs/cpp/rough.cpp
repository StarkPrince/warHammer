#include <iostream>
#include <stack>
#include <string.h>
#include <typeinfo>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int mx(stack<int> a)
{
    int m = 0;
    for (int i = a.size(); i > 0; i--)
    {
        if (a.top() > m)
        {
            m = a.top();
        }
        a.pop();
    }
    return m;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    stack<int> max;
    stack<int> s;
    max.push(0);
    int n;
    cin>>n;
    while (n--){
        int a;
        cin>>a;
        if(a==1){
            cin>>a;
            if(a>=max.top())
                max.push(a);
            s.push(a);
        }
        else if(a==2){
            if(s.top()==max.top()) max.pop();
            s.pop();
        } 
        else if(a==3) cout<<max.top()<<endl;
    }
    return 0;
}