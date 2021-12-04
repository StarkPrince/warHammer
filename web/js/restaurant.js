// quests
// from bs4 import BeautifulSoup
// import time

// a = time.time()
// html = requests.get(
//     "https://www.swiggy.com/restaurants/lollyss-madhubani-city-madhubani-431704")
// print(time.time()-a)

// soup = BeautifulSoup(html.text, "html.parser")

// prices = {}
// rlist = []
// for i in zip(soup.find_all("h3", {"class": "styles_itemNameText__3bcKX"}), soup.find_all("span", {"class": "rupee"})):
//     rlist.append([int(i[1].text), i[0].text.strip()])
//     prices[i[0].text] = int(i[1].text)
// rlist = sorted(rlist, key=lambda x: x[0])


// lprice = int(input("Enter the lower price: "))
// uprice = int(input("Enter the upper price: "))

const axios = require('axios');

const staurant = async (url) =>
{
    const response = await axios.get(url);
    const data = response.data;
    console.log(data);
}

staurant('https://www.swiggy.com/restaurants/lollyss-madhubani-city-madhubani-431704');


// authority: www.swiggy.com
// method: GET
// path: /restaurants
// scheme: https
// accept: text / html, application / xhtml + xml, application / xml; q = 0.9, image / avif, image / webp, image / apng,*/*;
// q = 0.8, application / signed - exchange; v = b3; q = 0.9
// accept-encoding: gzip, deflate, br
// accept-language: en-US,en;q=0.9
// cache-control: max-age=0
// cookie: __SW=MBYMW0YbHd1NmwAJV8c-VKLEDySK6qj3;
// _device_id = c84ece88 - c03d - 42ad - 9543 - 0d7870e20b2b; fontsLoaded = 1; _is_logged_in = 1; _session_tid = d2ccc3c01f38d2f64973baf14076e2403d6805cfc62132d87b76f401b988b0225fa48c960c6035e54fd20a6a7bfddce14a06d5b3d8aa54b025cbd971bb45e8feb84dcccd64625aeafc2eefad4dd49afa5ce73103e88cb83b96444c44be9cd89ae73603473ab7f7194a4648b3b3974648; userLocation =% 7B % 22lat % 22 % 3A % 2226.350714767074436 % 22 % 2C % 22lng % 22 % 3A % 2286.07373416423799 % 22 % 2C % 22address % 22 % 3A % 22Ward % 20No % 2018 % 2C % 20Professor's%20Colony%2C%20Bara%20Bazar%2C%20Madhubani%2C%20Bihar%20847211%2C%20India%22%2C%22area%22%3A%22Professor's % 20Colony % 22 % 2C % 22id % 22 % 3A % 22242106954 % 22 % 7D; _sid = xab2ac3e - 6f29 - 4008 - 9704 - 8e1636e08c89
// referer: https://web.postman.co/workspace/My-Workspace~6cc00f3f-05fc-4d3d-8e4a-86c5ea5eed26/collection/14197277-89d08a33-744c-4395-81c9-a8f06cbb1c9d?ctx=documentation
// sec-fetch-dest: document
// sec-fetch-mode: navigate
// sec-fetch-site: cross-site
// sec-fetch-user: ?1
// sec-gpc: 1
// upgrade-insecure-requests: 1
// user-agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.45 Safari/537.36

// rlist = [
//     # [12, 'Tawa Roti'],
//     # [17, 'Butter TawaRoti'],
//     # [20, 'Bhature'],
//     # [28, 'Onion Salad'],
//     # [30, 'Butter Naan'],
//     # [41, 'Chhole Bhature Addition 1 P'],
//     [46, 'Kalajamun(2pcs)'],
//     # [48, 'Dal Fry'],
//     [55, 'Veg Burger'],
//     # [56, 'Veg Cheesy Popcorn (5 Pc)'],
//     # [58, 'Hot N Sour Soup'],
//     # [63, 'Chicken Popcorn (5 Pc)'],
//     [63, 'Fries'],
//     # [63, 'Fried Rice'],
//     [69, 'Champ Veg Tortilla Wrap'],
//     # [69, 'Poha'],
//     # [69, 'Green Salad'],
//     # [74, 'Chinese Bhel'],
//     [74, 'Veg Chowmein'],
//     [79, 'Cheesy Veg Burger'],
//     # [81, 'Chole Chawal'],
//     # [82, 'Hot Wings'],
//     # [83, 'Steamed Rice'],
//     [86, 'Veg Manchurian Chowmein'],
//     [86, 'Veg Noodles'],
//     # [90, 'Mexican Rice'],
//     [90, 'Chicken Burger'],
//     [90, 'Veg Mayonnaise Sandwich'],
//     [92, 'Chhole Bhature'],
//     [95, 'Champ Chicken Tortilla Wrap'],
//     # [97, 'Dal Tarka'],
//     # [103, 'Jeera Rice'],
//     [103, 'Mushroom Chilli'],
//     [103, 'Paneer Chowmein'],
//     [103, 'Veg Schezwan Chowmein'],
//     # [104, 'Daal Tadka'],
//     [108, 'Cheesy Chicken Burger'],
//     [109, 'Chicken Chowmein'],
//     [113, 'Cj Chicken'],
//     [113, 'Chilli Paneer'],
//     [113, 'Paneer Jumanji'],
//     [113, 'Paneer Chilli'],
//     [115, 'Paneer Noodles'],
//     [115, 'Schezwan Noodles'],
//     [124, 'Veg Tortilla Wrap'],
//     [125, 'Mozerella Cheese Sandwich'],
//     [136, 'Chilli Chicken'],
//     [136, 'Paneer Sandwich'],
//     # [139, 'Veg Cheesy Popcorn Mexican Rice Bowl'],
//     [148, 'Large Fries'],
//     [155, 'Chicken Jumanji'],
//     # [159, 'Chicken Popcorn Mexican Rice Bowl'],
//     # [159, 'Chicken Fried Rice'],
//     [161, 'Egg Biryani'], [162, 'Chicken Sandwich'],
//     [166, 'Paneer Tortilla Wrap'],
//     [171, 'Chicken Boneless Strips (3 Pcs)'],
//     # [171, 'Hot Wings With Mexican Rice Bowl'],
//     [172, 'Veg Manchurian'],
//     [173, 'Cheesy Veg Tortilla Wrap'],
//     [173, 'Chicken Tortilla Wrap'],
//     [194, 'Veg Biryani'],
//     # [205, 'Mini Chicken Thali(rice And Roti)'],
//     [205, 'Mini Chicken Thali(tawa Roti Only)'],
//     # [205, 'Mini Chicken Thali(rice Only)'],
//     # [205, 'Boneless Strip With Mexican Rice Bowl'],
//     # [214, 'Cj Chicken Mexican Rice Bowl'],
//     [217, 'Veg Cheesy Popcorn Bucket'],
//     [221, 'Cheesy Chicken Tortilla Wrap'],
//     [225, 'Mini Non-veg Thali(mutton)'],
//     [225, 'Mini Veg Thali(tawa Roti)'],
//     # [225, 'Mini Veg Thali(rice Only)'],
//     [225, 'Mini Veg Thali (tawa Roti And Rice)'],
//     [228, 'Classic Margherita Medium'],
//     # [228, 'Chicken Fried Rice With Gravy'],
//     [229, 'Chicken Biryani'],
//     [247, 'Chicken Popcorn Bucket'],
//     # [255, 'Veg Tortilla Wrap, Veg Cheesy Popcorn Mexican Rice Bowl'],
//     [286, 'Paneer  Margherita Medium'],
//     [309, 'Crunchy Chicken Classic Medium'],
//     # [309, 'Chicken Tortilla Wrap, boneless Strip Rice Bowl'],
//     # [309, 'Chicken Tortilla Wrap, chicken Popcorn Rice Bowl'],
//     # [343, 'Chicken Tortilla Wrap, hot Wings Rice Bowl'],
//     # [343, 'Chicken Tortilla Wrap, cj Chicken Rice Bowl'],
//     [689, 'Hot Wings Bucket(20 Pc)'],
//     [792, 'Chicken Bucket(8 Pcs)'],
//     [827, 'Chicken Boneless Strips Bucket(15 Pcs)']
// ]
// # pick up one or more items so that the total price is less than the upper price and more than the lower price
// for i in range(len(rlist)):
//     tp = rlist[i][0]
//     if tp <= uprice:
//         if tp >= lprice:
//             print(tp)
//             print(rlist[i][1])
//             print("\n")
//             print("\n")
//         else:
//             for j in range(i+1, len(rlist)):
//                 up = tp + rlist[j][0]
//                 if up <= uprice:
//                     if up >= lprice:
//                         print(up)
//                         print(rlist[i][1])
//                         print(rlist[j][1])
//                         print("\n")
//                         print("\n")
//                     else:
//                         for k in range(j+1, len(rlist)):
//                             vp = up + rlist[k][0]
//                             if vp <= uprice:
//                                 if vp >= lprice:
//                                     print(vp)
//                                     print(rlist[i][1])
//                                     print(rlist[j][1])
//                                     print(rlist[k][1])
//                                     print("\n")
//                                     print("\n")
//                                 else:
//                                     for l in range(k+1, len(rlist)):
//                                         wp = vp + rlist[l][0]
//                                         if wp <= uprice and wp >= lprice:
//                                             print(wp)
//                                             print(rlist[i][1])
//                                             print(rlist[j][1])
//                                             print(rlist[k][1])
//                                             print(rlist[l][1])
//                                             print("\n")
//                                             print("\n")
