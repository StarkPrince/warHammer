from os import write
from selenium import webdriver
import time
query_list = []
browser = webdriver.Chrome()
for query in query_list:
    browser.get('https://www.google.com/search?q='+query)
    time.sleep(1)
    browser.quit()

# def printProgressBar(iteration, total, prefix='', suffix='', decimals=1, length=100, fill='#', printEnd="\r"):
#     percent = ("{0:." + str(decimals) + "f}").format(100 *
#                                                      (iteration / float(total)))
#     filledLength = int(length * iteration // total)
#     bar = fill * filledLength + '-' * (length - filledLength)
#     to_write = str(prefix) + '|'+str(bar)+'|' + \
#         str(percent) + '%' + str(suffix) + '\n'
#     fl.write(to_write)

# for i in range(1000):
query_list = []
browser = webdriver.Chrome()
for query in query_list:
    browser.get('https://www.google.com/search?q='+query)
    time.sleep(1)
    browser.quit()
