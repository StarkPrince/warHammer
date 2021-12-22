vowels = {'a', 'e', 'i', 'o', 'u'}
consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
              'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'}

for _ in range(int(input())):
    n = int(input())
    s = input()
    p = input()
    ans = 0
    d = {}
    for i in range(n):
        if (s[i] == "?" and p[i] != "?"):
            d[p[i]] = d.get(p[i], 0) + 1
        elif (s[i] != "?" and p[i] == "?"):
            d[s[i]] = d.get(s[i], 0) + 1
    print(d)
