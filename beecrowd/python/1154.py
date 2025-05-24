soma = 0
contador = 0
while True:
    numero = int(input())
    if numero <= 0:
        break
    soma += numero
    contador += 1
print(f"{soma/contador:.2f}")