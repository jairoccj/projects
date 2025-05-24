i = 1
j = 7
while j >= 5:
    print(f"I={i} J={j}")
    j -=1
    if i == 9 and j < 5:
        break
    elif j < 5:
        j = 7
        i += 2