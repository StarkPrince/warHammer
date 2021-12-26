from os import write
from selenium import webdriver
import time

# with open('input.txt', 'a') as fl:
# def printProgressBar(iteration, total, prefix='', suffix='', decimals=1, length=100, fill='#', printEnd="\r"):
#     percent = ("{0:." + str(decimals) + "f}").format(100 *
#                                                      (iteration / float(total)))
#     filledLength = int(length * iteration // total)
#     bar = fill * filledLength + '-' * (length - filledLength)
#     to_write = str(prefix) + '|'+str(bar)+'|' + \
#         str(percent) + '%' + str(suffix) + '\n'
#     fl.write(to_write)

for i in range(1000):
    browser = webdriver.Chrome()
    browser.get(
        'https://docs.google.com/forms/d/e/1FAIpQLScQjH8Pi4Qq5DF3NK6bqN80uoHoa0uCK5H-dAq8HfL8cYNYRw/viewform?fbzx=7906545393904690061')
    time.sleep(0.5+i/80)
    ans1 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[1]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans1.send_keys('Sardar Udham')

    ans2 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[2]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans2.send_keys('The Witcher 2')

    ans3 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[3]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans3.send_keys('Arcane - Enemy')

    ans4 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[4]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans4.send_keys('Arcane')

    ans5 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[5]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans5.send_keys('Dune')

    ans6 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[6]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans6.send_keys('Arcane')

    ans7 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[7]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans7.send_keys('Henry Cavill')

    ans8 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[8]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans8.send_keys('Hailee Steinfeld')

    ans9 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[9]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans9.send_keys('Red Notice')

    ans10 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[10]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans10.send_keys('Sardar Udham')

    ans11 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[11]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans11.send_keys('Dune')

    ans12 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[12]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans12.send_keys('Grahan')

    ans13 = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[13]/div/div/div[2]/div/div[1]/div/div[1]/input')
    ans13.send_keys('Arcane')

    submit = browser.find_element_by_xpath(
        '//*[@id="mG61Hd"]/div[2]/div/div[3]/div[1]/div[1]/div/span')
    submit.click()

    browser.close()
    # printProgressBar(i + 1, 1000, prefix='Progress:',
    #                  suffix='Complete', length=50)
