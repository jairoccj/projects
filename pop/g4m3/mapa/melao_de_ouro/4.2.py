tamanho = int(input())
matriz = []
mais = 0
menos = 0
bola = 0
contador = 1

for i in range(tamanho):
    matriz.append([0]*tamanho)

for i in range(len(matriz)):
        matriz[i] = list(map(int,input().split()))

for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        if contador - tamanho == 1:
            print()
            contador -= tamanho
        if matriz[i][j] <= 90:
            mais += 1
            print("+", end="") 
        elif matriz[i][j] <= 100:
            bola += 1
            print("o", end="")
        elif matriz[i][j] > 100:
            menos += 1
            print("-", end="")
        contador += 1
print("\n")

print(f"+: {mais}\no: {bola}\n-: {menos}")