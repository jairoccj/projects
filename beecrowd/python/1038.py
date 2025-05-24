x, y = input().split()
x, y = int(x), int(y)
match x:
    case 1:
        x = 4
    case 2:
        x = 4.5
    case 3:
        x = 5
    case 4:
        x = 2
    case 5:
        x = 1.5
total = x * y
print(f"Total: R$ {total:.2f}")