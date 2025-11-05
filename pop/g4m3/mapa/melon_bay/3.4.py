string = input()
fila = []
while string != "FIM":
    if string == "PROXIMO":
        print(f"PROXIMO: {fila[0]}")
        fila.remove(fila[0])
    else:
        fila.append(string)
        print(f"FILA:", " ".join(fila))
    string = input()