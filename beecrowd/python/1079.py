quantidade_testes = int(input())
for x in range(quantidade_testes):
    num1, num2, num3 = map(float,input().split())
    print(f"{(num1*2+num2*3+num3*5) / 10:.1f}")