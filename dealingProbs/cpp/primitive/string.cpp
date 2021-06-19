#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int nm;
    cin >> nm;
    vector<string> ultimate;
    while (nm--)
    {
        string temp;
        getline(cin, temp);
        ultimate.push_back(temp);
    }
    for (string i : ultimate)
        cout << i << endl;
}