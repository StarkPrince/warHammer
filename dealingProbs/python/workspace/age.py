import time
k = "the quick brown fox jumps over the lazy dog"
text = k.split(" ")

init = time.time()
for i in range(len(text)):
    sub_text = text[i]
    print(sub_text)
    a = input()
    while a.strip()!=sub_text:
        a =input()
end = time.time()
wpm = f"wpm: {int(len(text)*60/(end-init))}\n\n"
cpm = f"cpm: {int((len(k)-len(text)+1)*60/(end-init))}\n"
print(cpm[:-1],wpm[:])
with open("data.txt","a") as d:
    d.write(str(cpm))
    d.write(str(wpm))