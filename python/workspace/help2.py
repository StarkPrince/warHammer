# dict = {i:[i*k for k in range(1,11)] for i in [1,2,3,4,5,6,7,8,9]}
# for _ in range(int(input())):
#     a,b = [int(x) for x in input().split()]
#     for i in [int(x) for x in input().split()]:
#         print ("YES") if (i>(10*b) or any([i>=j and i%10==j%10 for j in dict[b]])) else print("NO")