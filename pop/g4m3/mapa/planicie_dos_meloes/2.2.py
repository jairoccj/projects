fadas = 0
contador = 0
casos = int(input())
for i in range(casos):
    frase = list(map(str, input().split()))
    for palavra in frase:
        palavra = palavra.lower().strip("!?.,;:")
        for k in range (len(palavra)-3):
            if palavra[k:k+4] == "fada":
                fadas += 2
    if fadas >= 1:
        contador += 1
        fadas = 0
print(contador)