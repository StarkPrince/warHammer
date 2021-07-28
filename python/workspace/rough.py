n = int(input())
arr = [int(x) for x in input().split()]
fountains = [-1] * n

for i in range(n):
    left = max(0, i - arr[i])
    right = min(n, i + arr[i] + 1)
    fountains[left] = max(fountains[left], right)

fountain_count = mx = 0
for i in range(n):
    if fountains[i] > mx:
        mx = fountains[i]
        fountain_count += 1
print(fountain_count)
