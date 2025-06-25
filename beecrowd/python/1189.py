matriz = []
soma = 0
qtd = 0
operador = input()
for i in range(12):
    matriz.append([0]*12)
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        matriz[i][j] = float(input())

for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        if j < i and j + i < len(matriz) - 1:
            soma += matriz[i][j]
            qtd += 1

if operador == "S":
    print(f"{soma:.1f}")
elif operador == "M":
    print(f"{soma/12:.1f}")