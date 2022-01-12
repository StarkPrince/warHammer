d = []
items = {}
for person in range(int(input())):
    liked = input().split()[1:]
    disliked = input().split()[1:]
    for i in liked:
        if i not in items:
            items[i] = [[], []]
        items[i][0].append(person)
    for i in disliked:
        if i not in items:
            items[i] = [[], []]
        items[i][1].append(person)
final_menu = []
items_copy = items.copy()
for i, j in items_copy.items():
    if len(j[1]) == 0:
        final_menu.append(i)
        del items[i]
    if len(j[0]) == 0:
        del items[i]
print(" ".join(final_menu))
print(items)
