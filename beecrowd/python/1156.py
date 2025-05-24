"""numerador = 1
denominador = 1
S = 0
for i in range(3, 39+1, 2):
    numerador = numerador + 2
    denominador = denominador * 2
    S = numerador + denominador
print(f"{S:.2f}")"""
numerador = 1
denominador = 1
S = 1
while numerador != 39:
    numerador += 2
    denominador *= 2
    fracao = numerador/denominador
    S += fracao
print(f"{S:.2f}")