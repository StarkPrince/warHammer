from pygame import mixer
from datetime import datetime
from time import time

def musiconloop(file,stopper):
    mixer.init()
    mixer.music.load(file )
    mixer.music.play()
    while True:
        a = input()
        if a == stopper:
            mixer.music.stop()
            break

def log_now(msg):
    with open("mylogs.txt","a") as f:
        f.write(f"{msg} {datetime.now()}\n")

if __name__ == '__main__':
    init_water = time()
    init_eyes = time()
    init_exercise = time()
    watersecs = 5
    exsecs = 7
    eyessecs = 11

    while True:
        if time() - init_water > watersecs:
            print("Water drinking time.Enter 'drank' to stop")
            musiconloop('water.mp3','drank')
            init_water = time()
            log_now("Drank Water at")

        if time() - init_eyes > eyessecs:
            print("Eyes relaxing time.Enter 'relaxed' to stop")
            musiconloop('eyes.mp3','relaxed')
            init_water = time()
            log_now("Drank Water at")

        if time() - init_exercise > exsecs:
            print("Exercise time.Enter 'done' to stop")
            musiconloop('phy.mp3','done')
            init_water = time()
            log_now("Drank Water at")