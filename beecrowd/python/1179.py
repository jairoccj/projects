casos = 15
pares = []
impares = []
for i in range(casos):
    numero = int(input())
    if numero % 2 == 0:
        pares.append(numero)
        if len(pares) == 5:
            for j in range(5):
                print(f"par[{j}] = {pares[j]}")
            pares = []
    else:
        impares.append(numero)
        if len(impares) == 5:
            for k in range(5):
                print(f"impar[{k}] = {impares[k]}")
            impares = []

for l in range(len(impares)):
    print(f"impar[{l}] = {impares[l]}")
for m in range(len(pares)):
    print(f"par[{m}] = {pares[m]}")