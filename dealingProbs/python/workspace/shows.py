a = input().lower()
s = a.count('danil')+a.count('olya')+a.count('salva')+a.count('ann')+a.count('nikita')
print("YNEOS"[(s!=1)::2])