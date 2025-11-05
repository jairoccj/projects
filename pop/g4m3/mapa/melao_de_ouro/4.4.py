linhas, colunas = map(int,input().split())
matriz = []
perfumes = 0
for i in range(linhas):
    matriz.append([0]*colunas)
for i in range(len(matriz)):
    matriz[i] = list(map(int, input().split()))

for i in range(len(matriz)):
    contador = 0
    for j in range(len(matriz[i])):
        if matriz[i][j] == 1 and contador != 1:
            matriz[i].append('M')
            contador = 1
    if contador == 0:
        matriz[i].append('-')

nova_linha = []

for j in range(colunas):
    contador = 0
    for i in range(linhas):
        if matriz[i][j] == 1 and contador != 1:
            nova_linha.append('M')
            contador = 1
    if contador == 0:
        nova_linha.append('-')
matriz.append(nova_linha)

for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        if matriz[i][j] == "M":
            perfumes += 1

print(perfumes)
for i in range(len(matriz)):
        matriz[i] = map(str, matriz[i])
        print(' '.join(matriz[i]))