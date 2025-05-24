num1 = int(input())
num2 = int(input())
if num1 > num2:
    auxiliar = num1
    num1 = num2
    num2 = auxiliar
soma = 0
for element in range(num1, num2+1):
    if element % 13 != 0:
        soma += element
print(soma)