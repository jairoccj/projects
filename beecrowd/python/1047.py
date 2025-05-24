"""hora_inicial, minuto_inicial, hora_final, minuto_final = map(int, input().split())

hora_total = ((hora_final*60 + minuto_final) - (hora_inicial*60 + minuto_inicial)) // 60
minuto_total = hora_total = ((hora_final*60 + minuto_final) - (hora_inicial*60 + minuto_inicial)) % 60
if hora_total == minuto_total == 00:
    hora_total += 24
print(f"O JOGO DUROU {hora_total} HORAS(S) E {minuto_total} MINUTO(S)")"""

hora_inicial, minuto_inicial, hora_final, minuto_final = map(int, input().split())

tempo_inicial = (hora_inicial*60) + minuto_inicial
tempo_final = (hora_final*60) + minuto_final

if tempo_final <= tempo_inicial:
    tempo_final += 24*60

diferenca_tempo = tempo_final - tempo_inicial

diferenca_hora = diferenca_tempo // 60
diferenca_minuto = diferenca_tempo % 60

print(f"O JOGO DUROU {diferenca_hora} HORA(S) E {diferenca_minuto} MINUTO(S)")