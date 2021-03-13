'''«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got
bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined
that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with
a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with
sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input
Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

Output
Output the number of damaged dragons.'''
index = []
unharmed = []
for i in range(5):
    index.append(int(input()))

for i in range(1,index[4]+1):
    if i%index[0]!=0 and i%index[1]!=0 and i%index[2]!=0 and i%index[3]!=0 and i%index[4]!=0:
        unharmed.append(i)
print(index[4]-len(unharmed))