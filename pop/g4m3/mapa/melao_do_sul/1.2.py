produtores, meloes_esperados = map(int,input().split())
total = 0
for i in range(produtores):
    meloes_colhidos = int(input())
    total += meloes_colhidos
if total >= meloes_esperados:
    print("NADA PREOCUPANTE")
elif meloes_esperados - total <= 5:
    print("POUCO PREOCUPANTE")
else:
    print("MUITO PREOCUPANTE")