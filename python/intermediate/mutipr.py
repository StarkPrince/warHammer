import multiprocessing

def spawn(i):
    print("Spawned!",i)

if __name__ == '__main__':
    for i in range(5):
        p = multiprocessing.Process(target=spawn,args=(i,))
        p.start()
        p.join()
    print("done")