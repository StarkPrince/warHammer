map<string, vector<pair<int, int>>> d;
ll ans = 0;
ll ansi = 0;
// for i in range(int(input())):
//     dr.append(sorted(list(map(int, input().split()))))
//     a, b, c = dr[i]
//     if min(a, b, c) > ans:
//         ans = min(a, b, c)
//         ansi = i+1
//     f1 = str(a) + "|" + str(b)
//     if f1 not in d:
//         d[f1] = []
//     d[f1].append([c, i])
//     if a == b == c:
//         continue
//     if a == b:
//         f2 = str(a) + "|" + str(c)
//         if f2 not in d:
//             d[f2] = []
//         d[f2].append([b, i])
//     elif b == c:
//         f2 = str(b) + "|" + str(c)
//         if f2 not in d:
//             d[f2] = []
//         d[f2].append([a, i])
//     else:
//         f2 = str(a) + "|" + str(c)
//         if f2 not in d:
//             d[f2] = []
//         d[f2].append([b, i])
//         f3 = str(b) + "|" + str(c)
//         if f3 not in d:
//             d[f3] = []
//         d[f3].append([a, i])
int n;
cin >> n;
for (int i = 0; i < n; ++i)
{
    ll d, e, f, a, b, c;
    cin >> d >> e >> f;
    vl v = {d, e, f};
    sort(all(v));
    a = v[0];
    b = v[1];
    c = v[2];
    if (min(a, min(b, c)) > ans)
    {
        ans = min(a, min(b, c));
        ansi = i + 1;
    }
    string f1 = to_string(a) + "|" + to_string(b);
    if (d.find(f1) == d.end())
        d[f1].push_back({c, i});
    if (a == b == c)
        continue;
    if (a == b)
    {
        string f2 = to_string(a) + "|" + to_string(c);
        if (d.find(f2) == d.end())
            d[f2].push_back({b, i});
    }
    else if (b == c)
    {
        string f2 = to_string(b) + "|" + to_string(c);
        if (d.find(f2) == d.end())
            d[f2].push_back({a, i});
    }
    else
    {
        string f2 = to_string(a) + "|" + to_string(c);
        if (d.find(f2) == d.end())
            d[f2].push_back({b, i});
        string f3 = to_string(b) + "|" + to_string(c);
        if (d.find(f3) == d.end()):
                d[f3].push_back({a, i});
    }
}
bool bl = true;
// for f, arr in d.items():
//     x, y = [int(x) for x in f.split("|")]
//     if len(arr) > 1:
//         p, q = sorted(arr, reverse=True)[:2]
//         if min((p[0]+q[0]), x, y) > ans:
//             ans = min((p[0]+q[0]), x, y)
//             bl = False
//             ansi = [p[1], q[1]]
for (auto it : d)
{
    ll x, y;
    x = it.first.split("|")[0];
    y = it.first.split("|")[1];
    if (len(it.second) > 1)
    {
        ll p, q;
        p = sorted(it.second, reverse = True)[0];
        q = sorted(it.second, reverse = True)[1];
        cout << p << " " << q << "\n";
    }
}
// if bl:
//     print(1)
//     print(ansi)
// else:
//     print(2)
//     print(*[i+1 for i in ansi])