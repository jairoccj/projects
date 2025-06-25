"""for i in range(0, 1, 1):
    for j in range(1, 4, 1):
        print(f"I={i} J={j}")

for i in range(2, 21, 2):
    for j in range(i + 10, i + 31, 10):
        i_valor = i / 10
        j_valor = j / 10
        if i_valor.is_integer() and j_valor.is_integer():
            i_valor = int(i_valor)
            j_valor = int(j_valor)
        print(f"I={i_valor} J={j_valor}")"""
for i in range(0, 21, 2):
    for j in range(i+10, i+31, 10):
        if j % 10 == 0:
            print(f"I={i//10} J={j//10}") 
        else:
            print(f"I={i/10} J={j/10}")