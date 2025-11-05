casos = int(input())
lista = []
total = 0
for i in range(casos):
    sensor = int(input())
    lista.append(sensor)
grupo = False
for i in lista:
    if i == 1:
        if not grupo:
            total += 1
            grupo = True
    else:
        grupo = False
print(total)