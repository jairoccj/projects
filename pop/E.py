letras = int(input())
string = input()

qtde = 0

for i in range(letras - 2):
    l = [string[i]]
    for j in [1, 2]:
        l.append(string[i + j])
    lista = list(dict.fromkeys(l))
    if len(lista) == 3:
        qtde += 1
print((qtde / (letras - 2)))