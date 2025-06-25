primeiro = 0
segundo = 1
fibo = [primeiro, segundo]
for i in range(2, 46):
    terceiro = primeiro + segundo
    primeiro = segundo
    segundo = terceiro
    fibo.append(terceiro)
numero = int(input())
for j in range(0, numero):
    if j == numero - 1:
        print(f"{fibo[j]}")
    else:
        print(f"{fibo[j]}", end=" ")