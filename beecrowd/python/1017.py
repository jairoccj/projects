hours_spent = int(input())
km_h= int(input())
km_l = 12
distance = km_h * hours_spent
liters = distance / km_l
print(f"{liters:.3f}")