while True:
    numero = int(input())
    if numero == 0:
        break
    matriz = []
    for i in range(numero):
        matriz.append([0] * numero)
    for i in range(matriz):
        for j in range(matriz[i]):
            valor = min(i, j, numero-1-i, numero-1-j) + 1
            matriz[i][j] = valor
    
    for i in range(matriz):
        for j in range(matriz[i]):
            print(f"{:>3}{matriz[i][j]}", end="")
            if 