"""casos = int(input())
andressa, bianca = 0, 0
ganhador = ""
linhas = []

for i in range(casos):
    linhas.append(input())

for i, linha in enumerate(linhas):
    if "C" == linha and i % 2 == 0:
        ganhador = "ANDRESSA"
        break
    elif "C" == linha and i % 2 != 0:
        ganhador = "BIANCA"
        break
    else:
        if i % 2 == 0:
            try:
                andressa += int(linha)
            except:
                if linha.isalpha() and linha == "A":
                    andressa *= 0
                else:
                    andressa += 10
        else:
            try:
                bianca += int(linha)
            except:
                if linha.isalpha() and linha == "A":
                    bianca *= 0
                else:
                    bianca += 10

if ganhador:
    print(ganhador)
elif bianca > andressa:
    print("BIANCA")
elif andressa > bianca:
    print("ANDRESSA")
else:
    print("EMPATE")"""

casos = int(input())
andressa, bianca = 0, 0
ganhador = ""

for i in range(casos):
    if i % 2 == 0:
        carta_andressa = input()
        if carta_andressa.isdigit():
            carta_andressa = int(carta_andressa)
            andressa += carta_andressa
        elif carta_andressa == "A":
            andressa = 0
        elif carta_andressa == "C":
            ganhador = "ANDRESSA"
            break
        elif carta_andressa.isalpha():
            andressa += 10
    
    else:
        carta_bianca = input()
        if carta_bianca.isdigit():
            carta_bianca = int(carta_bianca)
            bianca += carta_bianca
        elif carta_bianca == "A":
            andressa = 0
        elif carta_bianca == "C":
            ganhador = "BIANCA"
            break
        elif carta_bianca.isalpha():
            bianca += 10

if ganhador:
    print(ganhador)
elif bianca > andressa:
    print("BIANCA")
elif andressa > bianca:
    print("ANDRESSA")
else:
    print("EMPATE")