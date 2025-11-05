sensores, referencia = map(int, input().split())
lista = list(map(int, input().split()))
for i in lista:
    if i <= referencia:
        print(1)
    else:
        print(0)