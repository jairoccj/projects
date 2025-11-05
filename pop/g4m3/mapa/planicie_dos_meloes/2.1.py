frase = input()
for i in range(1, len(frase)):
    if frase[i] == "P" and frase[i-1] == "P" and frase[i+1] == "P":
        i += 2
    elif frase[i-1] == "P" or frase[i] == " ":
        print(frase[i], end="")
print()