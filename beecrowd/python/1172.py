array = 10
for i in range(10):
    numero = int(input())
    if numero <= 0:
        numero = 1
    print(f"X[{i}] = {numero}")