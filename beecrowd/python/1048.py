salario = float(input())
if salario <= 400:
    porcentagem = 0.15
    novo_salario = salario + salario * porcentagem
elif salario <= 800:
    porcentagem = 0.12
    novo_salario = salario + salario * porcentagem
elif salario <= 1200:
    porcentagem = 0.10
    novo_salario = salario + salario * porcentagem
elif salario <= 2000:
    porcentagem = 0.07
    novo_salario = salario + salario * porcentagem
elif salario > 2000:
    porcentagem = 0.04
    novo_salario = salario + salario * porcentagem
print(f"Novo salario: {novo_salario:.2f}\nReajuste ganho: {salario*porcentagem:.2f}\nEm percentual: {porcentagem*100:.0f} %")