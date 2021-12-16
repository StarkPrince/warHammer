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
#             r = re.search("videoId.{14}", page)
#             songs.append("https://www.youtube.com/watch?v="+str(r)[-13:-2])
#             print(song)
#             print(songs[-1])

# import requests
# from bs4 import BeautifulSoup
# import time

# a = time.time()
# html = requests.get(
#     "https://www.swiggy.com/restaurants/street-and-straw-madhubani-city-madhubani-431938")
# print(time.time()-a)

# soup = BeautifulSoup(html.text,  "html.parser")

# prices = {}
# rlist = []
# for i in zip(soup.find_all("h3",  {"class": "styles_itemNameText__3bcKX"}),  soup.find_all("span",  {"class": "rupee"})):
#     rlist.append([int(i[1].text),  i[0].text.strip()])
#     prices[i[0].text] = int(i[1].text)
# rlist = sorted(rlist,  key=lambda x: x[0])

# print(rlist)

lprice = int(input("Enter the lower price: "))
uprice = int(input("Enter the upper price: "))

# lollys = [
#     # [12,  'Tawa Roti'],
#     # [17,  'Butter TawaRoti'],
#     # [20,  'Bhature'],
#     # [28,  'Onion Salad'],
#     # [30,  'Butter Naan'],
#     # [41,  'Chhole Bhature Addition 1 P'],
#     [46,  'Kalajamun(2pcs)'],
#     # [48,  'Dal Fry'],
#     [55,  'Veg Burger'],
#     # [56,  'Veg Cheesy Popcorn (5 Pc)'],
#     # [58,  'Hot N Sour Soup'],
#     # [63,  'Chicken Popcorn (5 Pc)'],
#     [63,  'Fries'],
#     # [63,  'Fried Rice'],
#     [69,  'Champ Veg Tortilla Wrap'],
#     # [69,  'Poha'],
#     # [69,  'Green Salad'],
#     # [74,  'Chinese Bhel'],
#     [74,  'Veg Chowmein'],
#     [79,  'Cheesy Veg Burger'],
#     # [81,  'Chole Chawal'],
#     # [82,  'Hot Wings'],
#     # [83,  'Steamed Rice'],
#     [86,  'Veg Manchurian Chowmein'],
#     [86,  'Veg Noodles'],
#     # [90,  'Mexican Rice'],
#     [90,  'Chicken Burger'],
#     [90,  'Veg Mayonnaise Sandwich'],
#     [92,  'Chhole Bhature'],
#     [95,  'Champ Chicken Tortilla Wrap'],
#     # [97,  'Dal Tarka'],
#     # [103,  'Jeera Rice'],
#     [103,  'Mushroom Chilli'],
#     [103,  'Paneer Chowmein'],
#     [103,  'Veg Schezwan Chowmein'],
#     # [104,  'Daal Tadka'],
#     [108,  'Cheesy Chicken Burger'],
#     [109,  'Chicken Chowmein'],
#     [113,  'Cj Chicken'],
#     [113,  'Chilli Paneer'],
#     [113,  'Paneer Jumanji'],
#     [113,  'Paneer Chilli'],
#     [115,  'Paneer Noodles'],
#     [115,  'Schezwan Noodles'],
#     [124,  'Veg Tortilla Wrap'],
#     [125,  'Mozerella Cheese Sandwich'],
#     [136,  'Chilli Chicken'],
#     [136,  'Paneer Sandwich'],
#     # [139,  'Veg Cheesy Popcorn Mexican Rice Bowl'],
#     [148,  'Large Fries'],
#     [155,  'Chicken Jumanji'],
#     # [159,  'Chicken Popcorn Mexican Rice Bowl'],
#     # [159,  'Chicken Fried Rice'],
#     [161,  'Egg Biryani'],  [162,  'Chicken Sandwich'],
#     [166,  'Paneer Tortilla Wrap'],
#     [171,  'Chicken Boneless Strips (3 Pcs)'],
#     # [171,  'Hot Wings With Mexican Rice Bowl'],
#     [172,  'Veg Manchurian'],
#     [173,  'Cheesy Veg Tortilla Wrap'],
#     [173,  'Chicken Tortilla Wrap'],
#     [194,  'Veg Biryani'],
#     # [205,  'Mini Chicken Thali(rice And Roti)'],
#     [205,  'Mini Chicken Thali(tawa Roti Only)'],
#     # [205,  'Mini Chicken Thali(rice Only)'],
#     # [205,  'Boneless Strip With Mexican Rice Bowl'],
#     # [214,  'Cj Chicken Mexican Rice Bowl'],
#     [217,  'Veg Cheesy Popcorn Bucket'],
#     [221,  'Cheesy Chicken Tortilla Wrap'],
#     [225,  'Mini Non-veg Thali(mutton)'],
#     [225,  'Mini Veg Thali(tawa Roti)'],
#     # [225,  'Mini Veg Thali(rice Only)'],
#     [225,  'Mini Veg Thali (tawa Roti And Rice)'],
#     [228,  'Classic Margherita Medium'],
#     # [228,  'Chicken Fried Rice With Gravy'],
#     [229,  'Chicken Biryani'],
#     [247,  'Chicken Popcorn Bucket'],
#     # [255,  'Veg Tortilla Wrap,  Veg Cheesy Popcorn Mexican Rice Bowl'],
#     [286,  'Paneer  Margherita Medium'],
#     [309,  'Crunchy Chicken Classic Medium'],
#     # [309,  'Chicken Tortilla Wrap,  boneless Strip Rice Bowl'],
#     # [309,  'Chicken Tortilla Wrap,  chicken Popcorn Rice Bowl'],
#     # [343,  'Chicken Tortilla Wrap,  hot Wings Rice Bowl'],
#     # [343,  'Chicken Tortilla Wrap,  cj Chicken Rice Bowl'],
#     [689,  'Hot Wings Bucket(20 Pc)'],
#     [792,  'Chicken Bucket(8 Pcs)'],
#     [827,  'Chicken Boneless Strips Bucket(15 Pcs)']
# ]

rlist = [
    # [12,  'Tawa Roti'],
    # [15,  'Butter Roti'],
    # [22,  'Lachha Paratha'],
    # [55,  'Veg Maggi'],
    [59,  'Veg Cheese Burger'],
    # [60,  'Masala Maggi'],
    # [60,  'Cold Coffee shake'],
    # [60,  'Vanilla Shake'],
    [60,  'Veg Roll'],
    # [70,  'Egg Maggi'],
    # [70,  'Veg Momos Fry'],
    # [70,   'Chocolate Shake'],
    # [70,   'Veg Mauchow Soup'],
    [70,   'Egg Roll'],
    # [75,   'Veg Momos Steam'],
    # [75,  'Butterscotch  Shake'],
    # [75,  'Dark Chocolate  Shake'],
    # [75,  'Veg Hot Sour Soup'],
    [75,  'Spring Veg Roll'],
    # [80,  'Vanilla-LavaBlast Shake'],
    [80,  'Paneer Roll'],
    [85,  'Chilly Potato'],
    # [85,  'Strawberry  Shake'],
    # [85,  'Chicken Manchow Soup'],
    [89,  'Chicken Cheese Burger'],
    # [89,  'Lemonade[Sweet]'],
    # [89,  'Lemonade[Salt]'],
    # [90,  'Chicken Maggi'],
    [90,  'Veg Chowmin'],
    # [90,  'Oreo Shake'],
    # [90, 'Caramel Shake'],
    # [90,  'Choco-LavaBlast'],
    # [90,  'Classic Miint Mojito'],
    # [90,  'Chicken Hot Sour Soup'],
    # [90,  'Paneer Franky'],
    # [95,  'Veg Crispy'],
    # [95,  'Paneer Momos Fry'],
    # [95,  'Veg Cheese Momos Fry'],
    [95,  'Schezwan Veg Chowmin'],
    [99,  'Appy Fizz Mojito'],
    # [100,  'Veg Momos Chilly'],
    # [100,  'Veg Momos Tandoor'],
    [100,  'Paneer Momos Steam'],
    # [100,  'KitKat Shake'],
    [100,  'Spring Paneer Roll'],
    [100,  'Chicken Roll'],
    [100,  'Veg Margherita [Regular]'],
    # [110,  'Jeera Rice'],
    # [110,  'Green apple Cooler'],
    [110,  'Spring Chicken Roll'],
    [110,  'Chicken Franky'],
    # [120,  'Paneer Momos Chilly'],
    # [120,  'Paneer Momos Tandoor'],
    # [120,  'Chicken Momos Steam'],
    [120,  'Paneer Chowmin'],
    [120,  'Egg Chowmin'],
    # [120,  'Egg Rice'],
    [120,  'Egg Chicken Roll'],
    [120,  'Vegetable Pizza  [Regular]'],
    [120,  'Hawali Vegetarian  [Regular]'],
    # [125,  'Chicken Momos Fry'],
    [125,  'Schezwan Paneer Chowmin'],
    [130,  'Paneer Pakora'],
    # [130,  'Chicken Cheese Momos Fry'],
    # [130,  'Schezwan Fried Rice'],
    [130,  'Farmer Pizza  [Regular]'],
    [140,  'Chicken Pakora'],
    # [140,  'Veg Tripple Rice'],
    [140,  'Bbq Paneer Pizza  [Regular]'],
    # [149,  'Blue Ocean'],
    # [150,  'Bebicorn Crispy'],
    # [150,  'Babycorn Chilly'],
    [150,  'Veg Manchurian'],
    # [150,  'Chicken Momos Chilly'],
    # [150,  'Chicken Momos Tandoor'],
    [150,  'Chicken Chowmin'],
    [155,  'Mushroom Manchurian'],
    [160,  'Chicken Crispy'],
    [160,  'Chicken Popcorn'],
    [160,  'Paneer Chilly'],
    [160,  'Mushroom Chilly'],
    [160,  'Schezwan Chicken  Chowmin'],
    # [160,  'Schezwan Paneer  Rice'],
    [160,  'Bbq Chicken Pizza[Regular]'],
    [165,  'Paneer Manchurian'],
    [170,  'Paneer 65'],
    [170,  'Chicken Chilliy'],
    # [170,  'Schezwan Chicken Rice'],
    # [179,  'Hot & spicy Paneer Pizza[Regular]'],
    # [180,  'Chicken 65'],
    # [180,  'Veg Margherita[Medium]'],
    # [185,  'Chicken Manchurian'],
    # [189,  'Veg Grand Stalliano[Regular]'],
    # [190,  'Mushroom Masala'],
    # [190,  'Matar Paneer'],
    # [190,  'Paneer Masala'],
    # [190,  'Chicken Tripple Rice'],
    # [195,  'Red Bull  Mojito'],
    # [199,  'Deluxe Veggie[Regular]'],
    # [199,  'Hot & Spicy Chicken Pizza[Regular]'],
    # [199,  'Chicken Overload[Regualr]'],
    # [200,  'Vegetable Pizza[Medium]'],
    # [210,  'Kadai Paneer'],
    # [210,  'Hawali Vegetarian[Medium]'],
    # [219,  'Italian Primo[Regular]'],
    # [219,  'Deluxe Chicken[Regular]'],
    # [220,  'Chicken Dum Biryani'],
    # [220,  'Paneer Do Pyaza'],
    # [220,  'Chicken Masala'],
    # [220,  'Veg Cheese Pizza Roll'],
    # [230,  'Chicken Lollipop'],
    # [240,  'Chicken Do Pyaza'],
    # [240,  'Chicken Kadai'],
    # [240,  'Farmer Pizza[Medim]'],
    # [249,  'Chicken Cheese Pizza Roll'],
    # [260,  'Bbq Paneer Pizza[Medium]'],
    # [269,  'Bbq Chicken Pizza  [Medium]'],
    # [279,  'Chicken Tandoori Pizza [Regular]'],
    # [309,  'Hot & spicy Paneer Pizza [Medium]'],
    # [329,  'Veg Grand Stalliano [Medium]'],
    # [339,  'Hot & Spicy Chicken Pizza [Medium]'],
    # [349,  'Deluxe Veggie [Medium]'],
    # [349,  'Chicken Overload [Medium]'],
    # [379,  'Deluxe Chicken [Medium]'],
    # [389,  'Italian Primo [medium]'],
    # [459,  'Chicken Tandoori Pizza  [Medium]']
]
# # pick up one or more items so that the total price is less than the upper price and more than the lower price
for i in range(len(rlist)):
    tp = rlist[i][0]
    if tp <= uprice:
        if tp >= lprice:
            print(tp)
            print(rlist[i][1])
            print("\n \n")
        else:
            for j in range(i+1,  len(rlist)):
                up = tp + rlist[j][0]
                if up <= uprice:
                    if up >= lprice:
                        print(up)
                        print(rlist[i][1], "&&", rlist[j][1])
                        print("\n\n")
                    else:
                        for k in range(j+1,  len(rlist)):
                            vp = up + rlist[k][0]
                            if vp <= uprice:
                                if vp >= lprice:
                                    print(vp)
                                    print(rlist[i][1], "&&", rlist[j]
                                          [1], "&&", rlist[k][1])
                                    print("\n\n")
                                else:
                                    for l in range(k+1,  len(rlist)):
                                        wp = vp + rlist[l][0]
                                        if wp <= uprice and wp >= lprice:
                                            print(wp)
                                            print(
                                                rlist[i][1], "&&", rlist[j][1], "&&", rlist[k][1], "&&", rlist[l][1])
                                            print("\n\n")
