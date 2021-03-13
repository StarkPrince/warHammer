#include <iostream>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

string decToHex(int a){
    string g = "";
    while(a>0){
        int s = a%16;
        a /= 16;
        if(s<10){
            g+= to_string(s);
        }
        else{
            g+= char('A'+s-10);
        }
    }
    reverse(g.begin(), g.end());
    return g;

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    cout <<decToHex(a);
    return 0;
}