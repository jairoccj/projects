tipo = int(input())
contador = 0
num1, num2, num3, num4, num5 = map(int, input().split())
lista = [num1, num2 ,num3, num4, num5]
for x in lista:
    if x == tipo:
        contador += 1
print(contador)