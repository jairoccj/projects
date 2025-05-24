senha = 2002
parar = 0
while parar == 0:
    tentativa = int(input())
    if tentativa == senha:
        print("Acesso Permitido")
        parar = 1
    else:
        print("Senha Invalida")