# n = 5
n = int(input())
# arr = [2,1,1,2,1]
arr = [int(x) for x in input().split()]
fountains = [-1] * n

for i in range(n):
    left = max(0, i - arr[i])
    right = min(n, i + arr[i] + 1)
    fountains[left] = max(fountains[left], right)

fountain_count = 1
right = fountains[0]
mx = 0

# [3, 5, -1, 5, -1]
print(fountains)
for i in range(n):
    mx = max(mx, fountains[i])
    if i == right:
        fountain_count += 1
        right = mx
print(fountain_count)
