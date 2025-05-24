num1 = int(input())
num2 = int(input())
if num1 > num2:
    num1, num2 = num2, num1
for element in range(num1+1, num2):
    if element % 5 == 2 or element % 5 == 3:
        print(element)