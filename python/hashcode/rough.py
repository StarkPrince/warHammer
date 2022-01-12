def simulator(inp_file, final_menu):
    simulated_ans = 0
    with open(inp_file, "r") as f:
        for _ in range(int(f.readline())):
            liked = f.readline().split()[1:]
            disliked = f.readline().split()[1:]
            bl = dl = True
            for i in liked:
                if i not in final_menu:
                    bl = False
            for i in disliked:
                if i in final_menu:
                    dl = False
                    break
            if bl and dl:
                simulated_ans += 1
    return simulated_ans


d = []
items = {}
files = [
    ["a_an_example.in.txt", "output1.txt", "item1.txt"],
    ["b_basic.in.txt", "output2.txt", "item2.txt"],
    ["c_coarse.in.txt", "output3.txt", "item3.txt"],
    ["d_difficult.in.txt", "output4.txt", "item4.txt"],
    ["e_elaborate.in.txt", "output5.txt", "item5.txt"]
]

max_score = 0
ifl = ""
wfi = -1


def hash_code(working_file_index, z_factor):
    final_menu = []
    global wfi
    global ifl
    global items
    if wfi == -1:
        wfi = working_file_index
        ifl = files[working_file_index][0]
        # take input from the file
        with open(ifl, "r") as f:
            for person in range(int(f.readline())):
                liked = f.readline().split()[1:]
                disliked = f.readline().split()[1:]
                for i in liked:
                    if i not in items:
                        items[i] = [[], []]
                    items[i][0].append(person)
                for i in disliked:
                    if i not in items:
                        items[i] = [[], []]
                    items[i][1].append(person)

    items_copy = items.copy()
    itms = items.copy()
    # removing items which are just liked and disliked only
    for i, j in items_copy.items():
        if len(j[1]) == 0:
            final_menu.append(i)
            del itms[i]
        if len(j[0]) == 0:
            del itms[i]
    # item_file = open(files[working_file_index][2], "w")

    # writing the items to the file along with the amount they are liked and disliked
    t = []
    for i, j in itms.items():
        t.append([i, len(j[0]), len(j[1])])
    t = sorted(t, key=lambda x: -(x[1]/x[2]))
    for i in range(int(z_factor*len(t))):
        final_menu.append(t[i][0])
    # for i in t:
    #     item_file.write(i[0]+" "+str(i[1])+" "+str(i[2])+"\n")

    sm = simulator(ifl, set(final_menu))
    global max_score
    if sm > max_score:
        out_file = open(files[working_file_index][1], "w")
        out_file.write(str(len(final_menu))+" " + " ".join(final_menu))
        max_score = sm
    print("best score: ", max_score)


idxx = 3
mtx = [2, 5, 1, 1012, 1712]
ms = [3, 5, 10, 9368, 4986]
max_score = mtx[idxx]
for i in range(1000):
    print(i, end="\t")
    hash_code(idxx, i/1000)
