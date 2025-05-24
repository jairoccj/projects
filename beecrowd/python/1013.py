A, B, C = input().split()
A,B,C = int(A), int(B), int(C)
if A>=B and A>=C:
    print(f"{A} eh o maior")
elif B>=C and B>=A:
    print(f"{B} eh o maior")
elif C>=B and C>=A:
    print(f"{C} eh o maior")