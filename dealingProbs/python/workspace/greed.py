from itertools import permutations,chain
import requests
from tqdm import tqdm


concatenated = chain(range(48,58),range(97,103))
#
with open("patch.txt","w") as g:
    for ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10 in tqdm(permutations(concatenated, 10)):
        s = "https://html2-f.scribdassets.com/4pxq19rw3k25wk8e/pages/70-"
        r = ".jsonp"
        z = (ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10)
        for i in z:
            s+=chr(i)
        s+=r
        p = requests.get(s)
        if str(p)=="<Response [200]>":
            g.write(s+"\n")

    s="https://html2-f.scribdassets.com/4pxq19rw3k25wk8e/pages/60-38510c657e.jsonp"
    p = requests.get(s)
    if str(p)=="<Response [200]>":
        g.write(s+"\n")