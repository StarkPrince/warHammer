# import re
# import pandas as pd
# import requests
# import time

# # what ever loop you want to execute
# file = pd.read_csv('btop50.csv')
# songs = []
# with open("sng.txt") as s:
#     for song in list(file['songs']):
#         time_out = time.process_time() + 5
#         while time.process_time() <= time_out:
#             url = "https://www.youtube.com/results?search_query="+"+".join(song.split(" "))
#             page = requests.get(url).text
#             r = re.search("videoId.{14}",page)
#             songs.append("https://www.youtube.com/watch?v="+str(r)[-13:-2])
#             print(song)
#             print(songs[-1])

# import requests
# from bs4 import BeautifulSoup
# import time

# a = time.time()
# html = requests.get(
#     "https://www.swiggy.com/restaurants/lollyss-madhubani-city-madhubani-431704")
# print(time.time()-a)

# soup = BeautifulSoup(html.text, "html.parser")

# prices = {}
# rlist = []
# for i in zip(soup.find_all("h3", {"class": "styles_itemNameText__3bcKX"}), soup.find_all("span", {"class": "rupee"})):
#     rlist.append([int(i[1].text), i[0].text.strip()])
#     prices[i[0].text] = int(i[1].text)
# rlist = sorted(rlist, key=lambda x: x[0])


lprice = int(input("Enter the lower price: "))
uprice = int(input("Enter the upper price: "))

rlist = [
    # [12, 'Tawa Roti'],
    # [17, 'Butter TawaRoti'],
    # [20, 'Bhature'],
    # [28, 'Onion Salad'],
    # [30, 'Butter Naan'],
    # [41, 'Chhole Bhature Addition 1 P'],
    [46, 'Kalajamun(2pcs)'],
    # [48, 'Dal Fry'],
    [55, 'Veg Burger'],
    # [56, 'Veg Cheesy Popcorn (5 Pc)'],
    # [58, 'Hot N Sour Soup'],
    # [63, 'Chicken Popcorn (5 Pc)'],
    [63, 'Fries'],
    # [63, 'Fried Rice'],
    [69, 'Champ Veg Tortilla Wrap'],
    # [69, 'Poha'],
    # [69, 'Green Salad'],
    # [74, 'Chinese Bhel'],
    [74, 'Veg Chowmein'],
    [79, 'Cheesy Veg Burger'],
    # [81, 'Chole Chawal'],
    # [82, 'Hot Wings'],
    # [83, 'Steamed Rice'],
    [86, 'Veg Manchurian Chowmein'],
    [86, 'Veg Noodles'],
    # [90, 'Mexican Rice'],
    [90, 'Chicken Burger'],
    [90, 'Veg Mayonnaise Sandwich'],
    [92, 'Chhole Bhature'],
    [95, 'Champ Chicken Tortilla Wrap'],
    # [97, 'Dal Tarka'],
    # [103, 'Jeera Rice'],
    [103, 'Mushroom Chilli'],
    [103, 'Paneer Chowmein'],
    [103, 'Veg Schezwan Chowmein'],
    # [104, 'Daal Tadka'],
    [108, 'Cheesy Chicken Burger'],
    [109, 'Chicken Chowmein'],
    [113, 'Cj Chicken'],
    [113, 'Chilli Paneer'],
    [113, 'Paneer Jumanji'],
    [113, 'Paneer Chilli'],
    [115, 'Paneer Noodles'],
    [115, 'Schezwan Noodles'],
    [124, 'Veg Tortilla Wrap'],
    [125, 'Mozerella Cheese Sandwich'],
    [136, 'Chilli Chicken'],
    [136, 'Paneer Sandwich'],
    # [139, 'Veg Cheesy Popcorn Mexican Rice Bowl'],
    [148, 'Large Fries'],
    [155, 'Chicken Jumanji'],
    # [159, 'Chicken Popcorn Mexican Rice Bowl'],
    # [159, 'Chicken Fried Rice'],
    [161, 'Egg Biryani'], [162, 'Chicken Sandwich'],
    [166, 'Paneer Tortilla Wrap'],
    [171, 'Chicken Boneless Strips (3 Pcs)'],
    # [171, 'Hot Wings With Mexican Rice Bowl'],
    [172, 'Veg Manchurian'],
    [173, 'Cheesy Veg Tortilla Wrap'],
    [173, 'Chicken Tortilla Wrap'],
    [194, 'Veg Biryani'],
    # [205, 'Mini Chicken Thali(rice And Roti)'],
    [205, 'Mini Chicken Thali(tawa Roti Only)'],
    # [205, 'Mini Chicken Thali(rice Only)'],
    # [205, 'Boneless Strip With Mexican Rice Bowl'],
    # [214, 'Cj Chicken Mexican Rice Bowl'],
    [217, 'Veg Cheesy Popcorn Bucket'],
    [221, 'Cheesy Chicken Tortilla Wrap'],
    [225, 'Mini Non-veg Thali(mutton)'],
    [225, 'Mini Veg Thali(tawa Roti)'],
    # [225, 'Mini Veg Thali(rice Only)'],
    [225, 'Mini Veg Thali (tawa Roti And Rice)'],
    [228, 'Classic Margherita Medium'],
    # [228, 'Chicken Fried Rice With Gravy'],
    [229, 'Chicken Biryani'],
    [247, 'Chicken Popcorn Bucket'],
    # [255, 'Veg Tortilla Wrap, Veg Cheesy Popcorn Mexican Rice Bowl'],
    [286, 'Paneer  Margherita Medium'],
    [309, 'Crunchy Chicken Classic Medium'],
    # [309, 'Chicken Tortilla Wrap, boneless Strip Rice Bowl'],
    # [309, 'Chicken Tortilla Wrap, chicken Popcorn Rice Bowl'],
    # [343, 'Chicken Tortilla Wrap, hot Wings Rice Bowl'],
    # [343, 'Chicken Tortilla Wrap, cj Chicken Rice Bowl'],
    [689, 'Hot Wings Bucket(20 Pc)'],
    [792, 'Chicken Bucket(8 Pcs)'],
    [827, 'Chicken Boneless Strips Bucket(15 Pcs)']
]
# pick up one or more items so that the total price is less than the upper price and more than the lower price
for i in range(len(rlist)):
    tp = rlist[i][0]
    if tp <= uprice:
        if tp >= lprice:
            print(tp)
            print(rlist[i][1])
            print("\n")
            print("\n")
        else:
            for j in range(i+1, len(rlist)):
                up = tp + rlist[j][0]
                if up <= uprice:
                    if up >= lprice:
                        print(up)
                        print(rlist[i][1])
                        print(rlist[j][1])
                        print("\n")
                        print("\n")
                    else:
                        for k in range(j+1, len(rlist)):
                            vp = up + rlist[k][0]
                            if vp <= uprice:
                                if vp >= lprice:
                                    print(vp)
                                    print(rlist[i][1])
                                    print(rlist[j][1])
                                    print(rlist[k][1])
                                    print("\n")
                                    print("\n")
                                else:
                                    for l in range(k+1, len(rlist)):
                                        wp = vp + rlist[l][0]
                                        if wp <= uprice and wp >= lprice:
                                            print(wp)
                                            print(rlist[i][1])
                                            print(rlist[j][1])
                                            print(rlist[k][1])
                                            print(rlist[l][1])
                                            print("\n")
                                            print("\n")
