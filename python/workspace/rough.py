def countD(seq):
    ans = 0
    last = seq[0]
    for i in range(1, len(seq)):
        if seq[i] == last:
            ans += 1
        last = seq[i]
    return ans


def filler(seq, i):
    if i == len(seq):
        arr.append([countD(seq), seq])
        return
    if seq[i] == "?":
        if i == 0:
            filler(seq[:i] + "B" + seq[i + 1:], i + 1)
            filler(seq[:i] + "R" + seq[i + 1:], i + 1)
        elif seq[i - 1] == "B":
            filler(seq[:i] + "R" + seq[i + 1:], i + 1)
        else:
            filler(seq[:i] + "B" + seq[i + 1:], i + 1)
        return
    filler(seq, i + 1)


for _ in range(int(input())):
    arr = []
    a = int(input())
    s = input()
    filler(s, 0)
    print(sorted(arr)[0][1])
