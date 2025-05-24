quantidade = int(input())
total = 0
total_coelhos = 0
total_ratos = 0
total_sapos = 0
for x in range(quantidade):
    experimentos, animal = input().split()
    experimentos = int(experimentos)
    match animal:
        case "C":
            total_coelhos += experimentos
        case "R":
            total_ratos += experimentos
        case "S":
            total_sapos += experimentos
total_cobaias = total_coelhos + total_ratos + total_sapos
print(f"Total: {total_cobaias} cobaias")
print(f"Total de coelhos: {total_coelhos}")
print(f"Total de ratos: {total_ratos}")
print(f"Total de sapos: {total_sapos}")
print(f"Percentual de coelhos: {(total_coelhos/total_cobaias) * 100:.2f} %")
print(f"Percentual de ratos: {(total_ratos/total_cobaias) * 100:.2f} %")
print(f"Percentual de sapos: {(total_sapos/total_cobaias) * 100:.2f} %")