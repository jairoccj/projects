num1 = int(input())
num2 = int(input())
i = 0
soma = 0
for i in range(num1, num2):
    if i % 2 != 0:
        soma += i
for i in range(num2, num1):
    if i % 2 != 0:
        soma += i
print(soma)