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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

vector merge(vector<vector<int>> lists)
{
    ListNode *head = NULL;
    // create a min heap of listnode
    priority_queue<ListNode *, vector<ListNode *>, greater<ListNode *>> pq;

    for (auto i : lists)
    {
        if (!i.empty())
            pq.push(i);
    }
    // while the heap is not empty
    while (!pq.empty())
    {
        ListNode *temp = pq.top();
        pq.pop();
        if (temp->next)
            pq.push(temp->next);
        temp->next = head;
        head = temp;
    }
}

void solve()
{
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
