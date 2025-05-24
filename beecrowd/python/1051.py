salario = float(input())
taxa = 0
if salario > 0 and salario <= 2000:
    print("Isento")
elif salario <= 3000:
    salario -= 2000
    taxa = salario * 0.08
    print(f"R$ {taxa:.2f}")
elif salario <= 4500:
    salario -= 3000
    taxa = (1000 * 0.08) + (salario * 0.18)
    print(f"R$ {taxa:.2f}")
else:
    salario -= 4500
    taxa = (1000 * 0.08) + (1500 * 0.18) + (salario * 0.28)
    print(f"R$ {taxa:.2f}")