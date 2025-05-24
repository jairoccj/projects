while True:
    numero = int(input())
    maior = numero
    if numero == 0:
        break
    numero = list(range(1, numero+1))
    for i in numero:
        if i == maior:
            print(i, end="")
        else:
            print(i, end=" ")
    print()