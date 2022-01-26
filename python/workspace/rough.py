# ugly number
# find the nth ugly number
def ugly(n):
    ugly_list = [1]
    i2, i3, i5 = 0, 0, 0
    while len(ugly_list) < n:
        ugly_list.append(
            min(ugly_list[i2]*2, ugly_list[i3]*3, ugly_list[i5]*5))
        if ugly_list[-1] == ugly_list[i2]*2:
            i2 += 1
        if ugly_list[-1] == ugly_list[i3]*3:
            i3 += 1
        if ugly_list[-1] == ugly_list[i5]*5:
            i5 += 1
    return ugly_list[-1]


print(ugly(10))
print(ugly(1500))
