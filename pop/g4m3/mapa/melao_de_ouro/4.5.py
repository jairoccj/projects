tamanho = int(input())
entrada = []
saida = []
for i in range(tamanho):
    entrada.append([0]*tamanho)
for i in range(tamanho):
    saida.append([0]*tamanho)
for i in range(tamanho):
    entrada[i] = list(input())
dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]
for i in range(tamanho):
    for j in range(len(entrada[i])):
        if entrada[i][j] != "*":
            entrada[i][j] = 0
            
for i in range(tamanho):
    for j in range(len(entrada[i])):
        if entrada[i][j] == "*":
            saida[i][j] = 9
            for k in range(8):
                novo_i, novo_j = i + dx[k], j+ dy[k]
                if 0 <= novo_i < tamanho and 0 <= novo_j < tamanho and entrada[novo_i][novo_j] != "*":
                    saida[novo_i][novo_j] += 1

for i in range(tamanho):
        for j in range(tamanho):
            print(saida[i][j], end="")
        print()