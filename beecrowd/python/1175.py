"""lista = []
posicao = 0
for i in range(20):
    numero = int(input())
    lista.append(numero)
lista.reverse()
for j in lista:

    print(f"N[{posicao}] = {j}")
    posicao += 1"""
lista = []
for i in range(20):
    numero = int(input())
    lista.append(numero)
posicao = 0
for x in lista[::-1]:
    print(f"N[{posicao}] = {x}")
    posicao += 1