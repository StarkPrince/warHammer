from multiprocessing import Pool
import time

def s(n):
    sum = 0
    for i in range(1000):
        sum+=i*i
    return sum

if __name__ == '__main__':
    t1 = time.time()
    p = Pool()
    result = p.map(s, range(100000))
    p.close()
    p.join()
    print(time.time()-t1)
    t2 = time.time()
    r = [s(i) for i in range(100000)]
    print(time.time()-t2)