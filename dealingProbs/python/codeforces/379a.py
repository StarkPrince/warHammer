'''Vasily the Programmer loves romance, so this year he decided to illuminate his room with candles.

Vasily has a candles.When Vasily lights up a new candle, it first burns for an hour and then it goes out. Vasily is smart, so he can make b went out candles into a new candle. As a result, this new candle can be used like any other new candle.

Now Vasily wonders: for how many hours can his candles light up the room if he acts optimally well? Help him find this number.

Input
The single line contains two integers, a and b (1 ≤ a ≤ 1000; 2 ≤ b ≤ 1000).

Output
Print a single integer — the number of hours Vasily can light up the room for.'''
p = list(int(x) for x in input().split())
b = p[1]
hours = 0
candle =p[0]
candies= 0
while(candle>=1 or candies>b):
    hours += candle+candies//b
    candies -=(candies//b)*b
    candies += candle%b
    candle = candle//b
    continue
print(hours)