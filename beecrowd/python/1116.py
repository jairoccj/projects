quantidade = int(input())
for x in range(0, quantidade):
    numero1, numero2 = map(int, input().split())
    if numero2 == 0:
        print("divisao impossivel")
    else:
        print(f"{numero1 / numero2}")