"""i = 1
j = 60
while j >= 0:
    print(f"I={i} J={j}")
    i += 3
    j -= 5"""
i = 1
for j in range(60, -1, -5):
    print(f"I={i} J={j}")
    i += 3