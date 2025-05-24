"""lado_a, lado_b, lado_c = map(float,input().split())
def nao_forma(lado_a, lado_b, lado_c):
    return lado_c >= lado_a + lado_b or lado_b >= lado_c + lado_a or lado_a >= lado_c + lado_b

def obtusangulo(lado_a, lado_b, lado_c):
    if lado_c**2 > lado_a**2 + lado_b**2:
        print("TRIANGULO OBTUSANGULO")

def acutangulo(lado_a, lado_b, lado_c):
    if lado_c**2 < lado_a**2 + lado_b**2:
        print("TRIANGULO ACUTANGULO")

def retangulo(lado_a, lado_b, lado_c): 
    if lado_c**2 == lado_a**2 + lado_b**2:
        print("TRIANGULO RETANGULO")

def equilatero(lado_a, lado_b, lado_c):
    if lado_c == lado_a and lado_a == lado_b:
        print("TRIANGULO EQUILATERO")

def isosceles(lado_a, lado_b, lado_c):
    if lado_c == lado_a and lado_b != lado_c and lado_b != lado_a:
        print("TRIANGULO ISOSCELES")
    elif lado_a == lado_b and lado_c != lado_b and lado_c != lado_a:
        print("TRIANGULO ISOSCELES")
    elif lado_b == lado_c and lado_a != lado_b and lado_a != lado_c:
        print("TRIANGULO ISOSCELES")

if nao_forma(lado_a, lado_b, lado_c) == True:
    print("NAO FORMA TRIANGULO")
else:
    obtusangulo(lado_a, lado_b, lado_c)
    acutangulo(lado_a, lado_b, lado_c)
    retangulo(lado_a, lado_b, lado_c)
    equilatero(lado_a, lado_b, lado_c)
    isosceles(lado_a, lado_b, lado_c)"""

lado_a, lado_b, lado_c = map(float,input().split())
lado_a, lado_b, lado_c = sorted([lado_a, lado_b, lado_c], reverse=True)

if lado_a >= lado_b + lado_c:
    print("NAO FORMA TRIANGULO")
else:
    if lado_a**2 == lado_b**2 + lado_c**2:
        print("TRIANGULO RETANGULO")
    elif lado_a**2 > lado_b**2 + lado_c**2:
        print("TRIANGULO OBTUSANGULO")
    else:
        print("TRIANGULO ACUTANGULO")
    
    if lado_a == lado_b == lado_c:
        print("TRIANGULO EQUILATERO")
    elif lado_a == lado_b or lado_b == lado_c or lado_a == lado_c:
        print("TRIANGULO ISOSCELES")