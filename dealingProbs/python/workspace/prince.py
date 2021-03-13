for a in ['babba','abaac','codeforces','zeroorez','abcdcba','bbbbbbb','a']:
    # a = list(input())
    d = {}
    count = 0
    for i in range(len(a)):
        if a[i] in d and i-d[a[i]]<=2:
            count+=1
        else:
            d[a[i]]=i
    print(count)