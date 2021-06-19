import re
import pandas as pd
import requests
import time

# what ever loop you want to execute
file = pd.read_csv('btop50.csv')
songs = []
with open("sng.txt") as s:
    for song in list(file['songs']):
        time_out = time.process_time() + 5
        while time.process_time() <= time_out:
            url = "https://www.youtube.com/results?search_query="+"+".join(song.split(" "))
            page = requests.get(url).text
            r = re.search("videoId.{14}",page)
            songs.append("https://www.youtube.com/watch?v="+str(r)[-13:-2])
            print(song)
            print(songs[-1])