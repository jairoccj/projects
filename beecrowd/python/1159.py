
while True:
    numero = int(input())
    if numero == 0:
        break
    
    contador = 0
    soma = 0

    for i in range(numero, numero + 100):
        if i % 2 == 0:
            if contador == 5:
                break
            else:
                soma += i
                contador += 1
    print(soma)
