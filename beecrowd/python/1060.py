num1 = float(input())
num2 = float(input())
num3 = float(input())
num4 = float(input())
num5 = float(input())
num6 = float(input())
numeros = [num1, num2, num3, num4, num5, num6]
contador = 0
for i in numeros:
    if i>0:
        contador += 1
print(f"{contador} valores positivos")