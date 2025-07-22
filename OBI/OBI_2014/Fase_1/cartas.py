lista = list(map(int, input().split()))
if sorted(lista) == lista:
    print("C")
elif sorted(lista, reverse=True) == lista:
    print("D")
else:
    print("N")