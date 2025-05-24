valor = int(input())
alcance = range(1, valor+1)
for i in alcance:
    if i % 2 != 0:
        print(i)