escolha_p1, numero_p1, numero_p2, xitou, acusou = map(int, input().split())
if escolha_p1 == 1:  # player1 escolheu par
    if (numero_p1 + numero_p2) % 2 == 0:
        if xitou == 0:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 1 ganha!")
        elif xitou == 1:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 2 ganha!")


    elif (numero_p1 + numero_p2) % 2 != 0:
        if xitou == 0:
            if acusou == 0:
                print("Jogador 2 ganha!")
            elif acusou == 1:
                print("Jogador 1 ganha!")
        elif xitou == 1:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 2 ganha!")

if escolha_p1 == 0: #player1 escolheu impar
    if (numero_p1 + numero_p2) % 2 == 0: #par
        if xitou == 0:
            if acusou == 0:
                print("Jogador 2 ganha!")
            elif acusou == 1:
                print("Jogador 1 ganha!")
        elif xitou == 1:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 2 ganha!")
    elif (numero_p1 + numero_p2) % 2 != 0: #impar
        if xitou == 0:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 1 ganha!")
        elif xitou == 1:
            if acusou == 0:
                print("Jogador 1 ganha!")
            elif acusou == 1:
                print("Jogador 2 ganha!")