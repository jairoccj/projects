parar = 0
soma = 0
parar_soma = 0
while parar_soma != 2:
    nota = float(input())
    if nota < 0 or nota > 10:
        print("nota invalida")
    else:
        soma = soma + nota
        media = soma / 2
        parar_soma += 1
print(f"media = {media}")