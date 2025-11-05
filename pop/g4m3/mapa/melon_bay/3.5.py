maximo = int(input())
gfm = []
while True:
    if len(gfm) == maximo:
        break
    semente = int(input())
    if semente != 0:
        gfm.append(semente)
    else:
        maior = max(gfm)
        print(maior)
        gfm.remove(maior)