parar = 0
while parar == 0:
    numero1, numero2 = map(int, input().split())
    if numero1 < numero2:
        print("Crescente")
    elif numero1 > numero2:
        print("Decrescente")
    elif numero1 == numero2:
        parar = 1