casos = int(input())

for i in range(casos):
    a, p, c = 0, 0, 0
    
    t = int(input())
    rota = input()

    a = rota.index("A")
    p = rota.index("P")
    c = rota.index("C")

    if abs(p-a) < abs(c-a):
        print("P", abs(p-a))
    elif abs(c-a) < abs(p-a):
        print("C", abs(c-a))
    else:
        print("FUGIU!")