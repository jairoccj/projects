string = input()
tiro = 0
posicao = 0
tamanho = len(string)
while string != "O" * tamanho:
    if string[posicao] == "X":
        print("Silêncio ...")
        string = input()

    else:
        if posicao - 1 < 0:
            if string[posicao+1] == "X":
                tiro += 1
                print("Tiro de Melão!!!")
            elif string[posicao+1] == "O":
                posicao += 1
                print(f"Correndo pro esconderijo {posicao}!")
        elif posicao + 1 > tamanho:
            if string[posicao-1] == "X":
                tiro += 1
                print("Tiro de Melão!!!")
            elif string[posicao-1] == "O":
                posicao -= 1
                print(f"Correndo pro esconderijo {posicao}!")

        else:
            if string[posicao+1] == "X":
                if string[posicao-1] == "X":
                    tiro += 1
                    print("Tiro de Melão!!!")
                elif string[posicao-1] == "O":
                    posicao -= 1
                    print(f"Correndo pro esconderijo {posicao}!")
            elif string[posicao+1] == "O":
                if string[posicao-1] == "X":
                    posicao += 1
                    print(f"Correndo pro esconderijo {posicao}!")
                elif string[posicao+1] == "O":
                    tiro += 1
                    print("Tiro de Melão!!!")
        string = input()
print(f"Vitória com {tiro} melões!")