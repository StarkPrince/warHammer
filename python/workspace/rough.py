def getResult(N, K, arr):
    s = sorted([arr[i][j] + arr[i][j + 1] for j in range(K - 1)
               for i in range(N)], reverse=True)
    t = sorted([arr[i][j] + arr[i + 1][j] for j in range(K)
               for i in range(N-1)], reverse=True)
    return max(sum(s[:K]), sum(t[:K]))


def main():
    N, K = [int(x) for x in input().split()]
    m = []
    for i in range(N):
        m.append([int(x) for x in input().split()])

    print(getResult(N, K, m))


main()
