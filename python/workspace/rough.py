from collections import Counter


def cutting_intervals():
    N, C = map(int, input().strip().split())

    count = Counter()
    for l, r in (map(int, input().strip().split()) for _ in range(N)):
        count[l + 1] += 1
        count[r] -= 1
    points = sorted(x for x in count.items())
    overlap, prev = 0, None
    overlap_to_cnt = Counter()
    for curr, cnt in points:
        if overlap:
            overlap_to_cnt[overlap] += curr - prev  # count of [prev, curr)
        overlap += cnt
        prev = curr
    overlap_to_cnt = sorted(x for x in overlap_to_cnt.items())
    result = N
    while overlap_to_cnt:
        overlap, cnt = overlap_to_cnt.pop()
        cnt = min(C, cnt)
        result += cnt * overlap
        C -= cnt
        if C == 0:
            break
    return result


for case in range(int(input())):
    print(f"Case #{case + 1}: {cutting_intervals()}")
