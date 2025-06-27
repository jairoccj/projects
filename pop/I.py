numero = int(input())
total = 0
soma = 2
if numero == 1:
    print(2)
else:
    for i in range(numero):
        total += soma
        soma += 3
    print(total)