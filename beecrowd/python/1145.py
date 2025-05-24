num1, num2 = map(int,input().split())
if num1 > num2:
    num1, num2 = num2, num1

for i in range(1, num2+1):
    if i % num1 == 0:
        print(i)
    else:
        print(i, end=" ")