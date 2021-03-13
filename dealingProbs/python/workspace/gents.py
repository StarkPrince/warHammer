import csv
a = '''vendor~web-player.acadb5af.js:1 Heelein Toot Gayi
vendor~web-player.acadb5af.js:1 She Move It Like
vendor~web-player.acadb5af.js:1 Kya Baat Ay
vendor~web-player.acadb5af.js:1 Paagal
vendor~web-player.acadb5af.js:1 Teri Bhabhi (From "Coolie No. 1")
vendor~web-player.acadb5af.js:1 Proper Patola
vendor~web-player.acadb5af.js:1 Don't Be Shy Again (From "Bala")
vendor~web-player.acadb5af.js:1 Shayad (From "Love Aaj Kal")
vendor~web-player.acadb5af.js:1 Do You Love Me
vendor~web-player.acadb5af.js:1 LOL (From "Ginny Weds Sunny")
vendor~web-player.acadb5af.js:1 Bajre Da Sitta
vendor~web-player.acadb5af.js:1 Tehas Nehas (From "Khaali Peeli")
vendor~web-player.acadb5af.js:1 Illegal Weapon 2.0 (From "Street Dancer 3D")
vendor~web-player.acadb5af.js:1 Kar Gayi Chull
vendor~web-player.acadb5af.js:1 Naagin
vendor~web-player.acadb5af.js:1 Odhani (From "Made in China")
vendor~web-player.acadb5af.js:1 Sayonee (From "Sayonee")
vendor~web-player.acadb5af.js:1 Ghungroo (From "War")
vendor~web-player.acadb5af.js:1 Dus Bahane 2.0
vendor~web-player.acadb5af.js:1 Dil Bechara
vendor~web-player.acadb5af.js:1 Baby Girl
vendor~web-player.acadb5af.js:1 Tu Mera Nahi
vendor~web-player.acadb5af.js:1 Garmi (From "Street Dancer 3D") (feat. Varun Dhawan)
vendor~web-player.acadb5af.js:1 Tum Se Hi (From "Sadak 2")
vendor~web-player.acadb5af.js:1 Ik Wari
vendor~web-player.acadb5af.js:1 Dil Tod Ke
vendor~web-player.acadb5af.js:1 Meri Aashiqui
vendor~web-player.acadb5af.js:1 Malang (Title Track) [From "Malang - Unleash The Madness"]
vendor~web-player.acadb5af.js:1 Taaron Ke Shehar
vendor~web-player.acadb5af.js:1 Ishq Kamaal (From "Sadak 2")
vendor~web-player.acadb5af.js:1 Phoonk Phoonk
vendor~web-player.acadb5af.js:1 Crazy Lady
vendor~web-player.acadb5af.js:1 Phir Chala
vendor~web-player.acadb5af.js:1 Main Tumhara
vendor~web-player.acadb5af.js:1 Dil Chahte Ho
vendor~web-player.acadb5af.js:1 Khidki
vendor~web-player.acadb5af.js:1 Feelings
vendor~web-player.acadb5af.js:1 Kandhe Ka Woh Til
vendor~web-player.acadb5af.js:1 Clash
vendor~web-player.acadb5af.js:1 Taare Ginn
vendor~web-player.acadb5af.js:1 Cutiepie (From "Ae Dil Hai Mushkil")
vendor~web-player.acadb5af.js:1 Kuch Bhi Ho Jaye
vendor~web-player.acadb5af.js:1 Nakhre (Eyes on You 2)
vendor~web-player.acadb5af.js:1 Naiyyo
vendor~web-player.acadb5af.js:1 Khulke Jeene Ka
vendor~web-player.acadb5af.js:1 Jaan Ban Gaye
vendor~web-player.acadb5af.js:1 Shayad - English Rendition
vendor~web-player.acadb5af.js:1 Pachtaoge (Asees Kaur)
vendor~web-player.acadb5af.js:1 Bom Diggy
vendor~web-player.acadb5af.js:1 Mehrama (From "Love Aaj Kal")
vendor~web-player.acadb5af.js:1 Diamond Da Challa'''

k = a.split("\n")
file = open('btop50.csv', 'w+', newline='')

g = []
for i in k:
    g.append([(i[32:])])

# print(g)
# writing the data into the file
with file:
    for i in g:
        write = csv.writer(file)
        write.writerow(i)