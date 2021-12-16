# #include <bits/stdc++.h>

# using namespace std;

# int main() {
#   ios::sync_with_stdio(false);
#   cin.tie(0);
#   int tt;
#   cin >> tt;
#   while (tt--) {
#     long long x, y;
#     cin >> x >> y;
#     if (y < x) {
#       cout << y + x << '\n';
#       continue;
#     }
#     if (y == x) {
#       cout << x << '\n';
#       continue;
#     }
#     cout << y - y % x / 2 << '\n';
#   }
#   return 0;
# }

for _ in range(int(input())):
    x, y = map(int, input().split())
    if y < x:
        print(y + x)
    elif y == x:
        print(x)
    else:
        print(y - y % x // 2)
