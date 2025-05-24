numeros = int(input())
checar = 0
contador_dentro = 0
contador_fora = 0
for x in range(numeros):
    checar = int(input())
    if checar >= 10 and checar <= 20:
        contador_dentro += 1
    else:
        contador_fora += 1
print(f"{contador_dentro} in")
print(f"{contador_fora} out")