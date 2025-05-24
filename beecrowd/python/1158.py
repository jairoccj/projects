casos = int(input())
for i in range(casos):
    num1, num2 = map(int, input().split())
    if num1 % 2 == 0:
        num1 += 1
    soma = 0
    contador = 0
    while contador < num2:
        soma += num1
        num1 += 2
        contador += 1
    print(soma)