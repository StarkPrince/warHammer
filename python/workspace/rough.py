# # 0 1 1 2 3 5 8 13 21 34
# # 0      1      2      3        4
# # 1 1    2 1    5 3    34 21    1597 987
# # 1 0    1 1    3 2    21 13    987  610
# #   2      3      5        9         17
# # a b   a*a+b*b  (a+c)*b
# # b c   (a+c)*b  b*b+c*c
#
# def fib(n):
#     a, b = 0, 1
#     for _ in range(n):
#         a, b = b, a + b
#     return a
#
#
# for i in range(2,20):
#     print(i, fib(i))


def recc(n, arr):
    for i in range(3, n + 1):
        arr.append(arr[-1] + arr[-2] + arr[-3])
    return arr[-1]


arr = [1, 1, 2]
print(recc(4, arr))
