from multiprocessing import Pool
def job(num):
    return num*2
if __name__ == '__main__':
    p = Pool(processes=20)
    data = p.map(job,range(20))
    data1 = p.map(job,range(19))
    data2 = p.map(job,range(18))
    p.close()
    print(data)