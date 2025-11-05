casos = int(input())
lista = []
for i in range(casos):
    numero = int(input())
    lista.append(numero)
lista.sort()
for i in range(len(lista)):
    print(lista[i])