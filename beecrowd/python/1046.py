tempo1, tempo2 = map(int, input().split())
tempo_total = (24 - tempo1 + tempo2)
if tempo_total > 24:
    tempo_total %= 24
    print(f"O JOGO DUROU {tempo_total} HORA(S)")
else:
    print(f"O JOGO DUROU {tempo_total} HORA(S)")