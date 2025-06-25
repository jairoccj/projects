fibo = []
atual = 1
antecessor = 1
ultimo = 0
fibo.append(ultimo)
fibo.append(antecessor)
fibo.append(atual)
for i in range(61-3):
    ultimo = antecessor
    antecessor = atual
    atual = ultimo + antecessor
    fibo.append(atual)
casos = int(input())
for i in range(casos):
    numero = int(input())
    print(f"Fib({numero}) = {fibo[numero]}")