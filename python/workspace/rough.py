for _ in range(int(input())):
    n = int(input())
    participants = []
    for _ in range(n):
        participants.append([int(x) for x in input().split()])
    possible_winners = set([i for i in range(n)])

    while True:
        if len(possible_winners) == 0:
            print("-1")
            break
        p1 = possible_winners.pop()
        for p2 in possible_winners.copy():
            if p1 == p2:
                continue
            p1p = p2p = 0
            for j in range(5):
                if participants[p1][j] < participants[p2][j]:
                    p1p += 1
                else:
                    p2p += 1
            if p1p > p2p and p2 in possible_winners:
                possible_winners.remove(p2)
            elif p2p > p1p and p1 in possible_winners:
                possible_winners.remove(p1)
    print(possible_winners)
