# utilizando if/else caso o numero1 seja maior que o numero2:

"""quantidade = int(input())
resultado = 0
for x in range (0, quantidade):
    numero1, numero2 = map(int, input().split())
    if numero1 < numero2:
        for numero in range(numero1+1, numero2):
            if numero % 2 != 0:
                resultado = resultado + numero
        print(resultado)
        resultado = 0
    else:
        for numero in range(numero2+1, numero1):
            if numero % 2 != 0:
                resultado = resultado + numero
        print(resultado)
        resultado = 0"""


# utilizando atribuição simultânea (mais pythônico)
quantidade = int(input())
resultado = 0
for x in range (0, quantidade):
    numero1, numero2 = map(int, input().split())
    if numero1 > numero2:
        numero1, numero2 = numero2, numero1
    for numero in range(numero1+1, numero2):
        if numero % 2 != 0:
            resultado = resultado + numero
    print(resultado)
    resultado = 0