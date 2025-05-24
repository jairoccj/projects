contador_grenal = 0
vitoria_inter = 0
vitoria_gremio = 0
empates = 0
while True:
    gol_inter, gol_gremio = map(int, input().split())
    if gol_inter > gol_gremio:
        vitoria_inter += 1
    elif gol_inter < gol_gremio:
        vitoria_gremio += 1
    else:
        empates += 1
    contador_grenal += 1
    while True:
        print("Novo grenal (1-sim 2-nao)")
        novo_grenal = int(input())
        if novo_grenal == 1 or novo_grenal == 2:
            break
    if novo_grenal == 2:
        break
print(f"{contador_grenal} grenais")
print(f"Inter:{vitoria_inter}")
print(f"Gremio:{vitoria_gremio}")
print(f"Empates:{empates}")
if vitoria_inter > vitoria_gremio:
    print("Inter venceu mais")
elif vitoria_inter < vitoria_gremio:
    print("Gremio venceu mais")
else:
    print("Não houve vencedor")