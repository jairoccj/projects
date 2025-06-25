"""casos = int(input())
valores = list(map(int, input().split()))[:casos]
menor_valor = 1000
menor_posicao = 0
for index, value in enumerate(valores):
    if value < menor_valor:
        menor_valor = value
        menor_posicao = index
print(f"Menor valor: {menor_valor}\nPosicao: {menor_posicao}")"""

casos = int(input())
valores = list(map(int, input().split()))[:casos]
print(f"Menor valor: {min(valores)}\nPosicao: {valores.index(min(valores))}")