defensores = int(input())
forca, meloes_para_roubo, resgates = map(int, input().split())
furtos = 0
resgatados  = 0
while True:
    if forca == 0 and meloes_para_roubo == 0 and resgates == 0:
        break
    if defensores < forca:
        furtos += meloes_para_roubo
        resgatados += resgates
    print(f"Meloes roubados: {furtos}")
    print(f"Goblins resgatados: {resgatados}")
    print("---")
    forca, meloes_para_roubo, resgates = map(int, input().split())