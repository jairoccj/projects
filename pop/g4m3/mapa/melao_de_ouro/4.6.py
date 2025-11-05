slimes = list(map(int, input().split()))
turnos = 0
tem_slime = True
while tem_slime:
    remessa = []
    tem_slime = False
    for i in slimes:
        if i == 1:
            continue
        elif i % 2 == 0:
            remessa.extend([i // 2, i // 2])
            tem_slime = True
        else:
            remessa.append(i + 1)
            tem_slime = True
    slimes = remessa
    if tem_slime:
        turnos += 1
print(turnos)