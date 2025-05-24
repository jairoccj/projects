quantidade = int(input())
for x in range(quantidade):
    valor = int(input())
    if valor == 0:
        print("NULL")
    elif valor % 2 == 0:
        if valor > 0:
            print("EVEN POSITIVE")
        else:
            print("EVEN NEGATIVE")
    elif valor % 2 != 0:
        if valor > 0:
            print("ODD POSITIVE")
        else:
            print("ODD NEGATIVE")