linhas = int(input())
matriz = []
for i in range(linhas):
    matriz.append([0] * 3)
for i in range(len(matriz)):
    x, y, z = map(int, input().split())
    matriz[i][0], matriz[i][1], matriz[i][2] = x, y, z
for i in range(linhas):
    minima = float('inf')
    for j in range(linhas):
        if i != j:
            dx = matriz[i][0] - matriz[j][0]
            dy = matriz[i][1] - matriz[j][1]
            dz = matriz[i][2] - matriz[j][2]
            distancia = ((dx**2) + (dy**2) + (dz**2))**0.5
            minima = min(minima, distancia)
    if minima <= 20:
        print("A")
    elif minima <= 50:
        print("M")
    else:
        print("B")