soma = 0
lista = list(map(int, input().split()))
nova_lista = [elemento for elemento in lista if elemento > 0][:2]

for i in range(nova_lista[0], nova_lista[0] + nova_lista[1]):
    soma += i
print(soma)