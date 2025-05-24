"""
numero1, numero2 = map(int, input().split())
soma = 0
if numero1 > numero2:
    numero1, numero2 = numero2, numero1
if numero1 > 0 and numero2 > 0:
    for i in range(numero1, numero2+1):
        print(f"{i}", end=" ")
        soma += i
    print(f"Sum={soma}")
"""
parar = 0
while True:
    numero1, numero2 = map(int, input().split())
    soma = 0
    if numero1 > numero2:
        numero1, numero2 = numero2, numero1
    if numero1 > 0 and numero2 > 0:
        for i in range(numero1, numero2+1):
            print(f"{i}", end=" ")
            soma += i
        print(f"Sum={soma}")
    else:
        break