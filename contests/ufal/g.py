import random

def gerar_senha():
    s = ""
    s += chr(random.randint(33, 47)) #esp
    s += chr(random.randint(48, 57)) #num
    s += chr(random.randint(65, 90)) #maius
    s += chr(random.randint(97, 122)) #minus
    for i in range(random.randint(4, 8)):
        s += chr(random.randint(33, 126))
    return s

n = int(input())

for i in range(n):
    print(gerar_senha())