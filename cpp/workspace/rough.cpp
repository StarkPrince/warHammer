#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////////
/*
██████╗░██████╗░██╗███╗░░██╗░█████╗░███████╗  ██████╗░░█████╗░░░░░░██╗
██╔══██╗██╔══██╗██║████╗░██║██╔══██╗██╔════╝  ██╔══██╗██╔══██╗░░░░░██║
██████╔╝██████╔╝██║██╔██╗██║██║░░╚═╝█████╗░░  ██████╔╝███████║░░░░░██║
██╔═══╝░██╔══██╗██║██║╚████║██║░░██╗██╔══╝░░  ██╔══██╗██╔══██║██╗░░██║
██║░░░░░██║░░██║██║██║░╚███║╚█████╔╝███████╗  ██║░░██║██║░░██║╚█████╔╝
╚═╝░░░░░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚════╝░╚══════╝  ╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░
*/
//////////////////////////////////////////////////
#define pv(v)             \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;

#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];

#define inout                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

///////////////////////////////////////////////////

typedef long long ll;
#define int long long
#define MOD 1000000007
#define inf 0x3f3f3f3f
#define minf -0x3f3f3f3f

///////////////////////////////////////////////////
#define ff first
#define ss second
#define pll pair<ll, ll>
#define in insert
#define mp map<int, int>
#define ar array
#define mem(a, t) memset(a, t, sizeof(a))
#define endl "\n"
#define print(x) cout << x << endl

///////////////////////////////////////////////////
#define V vector
#define vl vector<ll>
#define vvl vector<vl>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define Pb pop_back
#define be() begin()
#define en() end()
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define len(p) (ll) p.size()

///////////////////////////////////////////////////
#define f(i, yha, wha) for (ll i = yha; i < wha; i++)
#define rf(i, wha, yha) for (ll i = wha; i >= yha; i--)
#define f0(n) for (ll i = 0; i < n; i++)
#define f1(n) for (ll i = 1; i <= n; i++)
#define fg(i, yha, wha, gap) for (ll i = yha; i < wha; i += gap)

///////////////////////////////////////////////////

// def combine(self, n: int, k: int) -> List[List[int]]:
//     return self.helper(list([i+1 for i in range(n)]),[],k,set())

vector<vector<int>> helper(vector<int> arr, vector<int> lt, int k, set<string> d)
{
    if (k == 0)
    {
        vector<vector<int>> ans;
        ans.push_back(lt);
        return ans;
    }
    //     ans = []
    //     for i in arr:
    //         s = " ".join(str(j) for j in sorted(lt+[i]))
    //         if s not in d:
    //             d.add(s)
    //             parr = arr.copy()
    //             parr.remove(i)
    //             ans+=self.helper(parr,lt+[i],k-1,d)
    //         else:
    //             d.add(s)
    //     return ans
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        string s = "";
        for (int j = 0; j < lt.size(); j++)
            s += to_string(lt[j]) + " ";
        s += to_string(arr[i]);
        if (d.find(s) == d.end())
        {
            d.insert(s);
            vector<int> parr = arr;
            parr.erase(parr.begin() + i);
            vector<vector<int>> temp = helper(parr, lt, k - 1, d);
            for (int j = 0; j < temp.size(); j++)
                ans.push_back(temp[j]);
        }
    }
    return ans;
}

int32_t main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
