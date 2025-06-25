matriz = []
for i in range(12):
    matriz.append([0] * 12)
linha = int(input())
operador = input()
soma = 0
media = 0
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        matriz[i][j] = float(input())
        if i == linha:
            soma += matriz[i][j]
if operador == "S":
    print(f"{soma:.1f}")
elif operador == "M":
    print(f"{soma/12:.1f}")