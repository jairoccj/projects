matriz = []
soma = 0
qtd_media = 0
operador = input()
for i in range(12):
    matriz.append([0] * 12)
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        matriz[i][j] = float(input())
        if j < i:
            soma += matriz[i][j]
            qtd_media += 1
if operador == "S":
    print(f"{soma:.1f}")
elif operador == "M":
    print(f"{soma/qtd_media:.1f}")