A, B, C = input().split()
A,B,C = float(A), float(B), float(C)
delta = (B**2) - (4*A*C)
if delta>-1 and A!=0:
    R1 = (-B + delta**(0.5)) / (2*A)
    R2 = (-B - delta**(0.5)) / (2*A)
    print(f"R1 = {R1:.5f}")
    print(f"R2 = {R2:.5f}")
else:
    print("Impossivel calcular")