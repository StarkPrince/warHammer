def generateMatrix(n):
    res, lo = [[n*n]], n*n
    while lo > 1:
        lo, hi = lo - len(res), lo
        res = [[i for i in range(lo, hi)]] + [list(j) for j in zip(*res[::-1])]
    return res


print(generateMatrix(3))
