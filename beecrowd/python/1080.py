"""lista = []
for x in range(1, 101):
    n = int(input())
    lista.append(n)
maior = (max(lista))
posicao = lista.index(maior)
print(maior)
print(posicao+1)"""
auxiliar = 0
posicao = 0
for item in range(100):
    numero = int(input())
    if(numero>auxiliar):
        auxiliar = numero
        posicao = item
print(auxiliar)
print(posicao+1)