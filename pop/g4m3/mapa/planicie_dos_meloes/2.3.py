lista = []
casos = int(input())
for i in range(casos):
    palavra = input()
    if palavra not in lista:
        lista.append(palavra)
for i in range(len(lista)):
    print(lista[i])