valor = int(input())
alcance = range(valor, valor+12)
for i in alcance:
    if i % 2 != 0:
        print(i)