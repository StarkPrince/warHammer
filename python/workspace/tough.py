for i in range(int(input())):
    k=int(input())
    a=list(map(int,input()))
    i=0
    e=10*[0]
    y=1
    f=[1,4,6,8,9]
    for j in a:
        if(j in f):
            print(1)
            print(j)
            y=0
            break
        e[j]=e[j]+1
    if(y==1):
        for j in range(1,len(e)):
            if(e[j]>=2):
                print(2)
                print(j+10*j)
                y=0
                break
    if(y==1):
        if(e[5]>=1):
            for i in range(1,len(e)):
                if(e[i]>=1):
                    print(2)
                    print(5+10*i)
                    y=0
                    break
        else:
            print(2)
            print(27)