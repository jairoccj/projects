string = input()
lista = []
while string != "FIM":
    lista.append(string)
    print(f"{string} {lista.count(string)}")
    string = input()