"""soma = 0
while True:
    nota1 = float(input())
    if nota1 < 0 or nota1 > 10:
        print("nota invalida")
    else:
        soma = soma + nota1
        break
while True:
    nota2 = float(input())
    if nota2 < 0 or nota2 > 10:
        print("nota invalida")
    else:
        soma = soma + nota2
        break
media = soma / 2

print(f"media = {media:.2f}")
soma = 0
media = 0

while True:
    print("novo calculo (1-sim 2-nao)")
    novo_calculo = int(input())
    if novo_calculo == 1:
        while True:
            nota1 = float(input())
            if nota1 < 0 or nota1 > 10:
                print("nota invalida")
            else:
                soma = soma + nota1
                break
        while True:
            nota2 = float(input())
            if nota2 < 0 or nota2 > 10:
                print("nota invalida")
            else:
                soma = soma + nota2
                break
        media = soma / 2
        print(f"media = {media:.2f}")
        media = 0
        soma = 0
    
    elif novo_calculo == 2:
        break"""

while True:
    soma = 0
    parar = 0
    while parar < 2:
        nota = float(input())
        if nota >= 0 and nota <= 10:
            soma += nota
            parar += 1
        else:
            print("nota invalida")
    print(f"media = {soma / 2:.2f}")
    
    while True:
        print("novo calculo (1-sim 2-nao)")
        novo_calculo = int(input())
        if novo_calculo == 1 or novo_calculo == 2:
            break
    if novo_calculo == 2:
        break