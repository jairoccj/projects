numero = int(input())
soma = 0
if numero == 1:
    print("0")
if numero == 2:
    print("0 1")
if numero == 3:
    print("0 1 1")
elif numero > 5:
    print(f"0 0 1" ,end=" ")
    for i in range(0, numero):
        soma = soma - 1 + soma + 2
        print(f"{soma}", end= " ")