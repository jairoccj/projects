casos = int(input())
pares = []
impares = []
for i in range(casos):
    numero = int(input())
    if numero % 2 == 0:
        pares.append(numero)
    else:
        impares.append(numero)
pares.sort()
impares.sort(reverse=True)
for j in pares:
    print(j)
for k in impares:
    print(k)