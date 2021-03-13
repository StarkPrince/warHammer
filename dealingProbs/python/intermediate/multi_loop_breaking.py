import timeit
print(timeit.timeit("""combo = (13,72,93)
def combo_gen():
    for i in range(100):
        for j in range(100):
            for k in range(100):
                yield (i,j,k)

for (i,j,k) in combo_gen():
    if (i,j,k) == combo:
        # print(f"Found the combo {i,j,k}")
        break""",number=1))