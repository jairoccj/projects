beleza = 0
verso1 = list(map(str, input().split()))
palavra1 = verso1[-1][::-1].strip(",")
verso2 = list(map(str, input().split()))
palavra2 = verso2[-1][::-1].strip(",")
verso3 = list(map(str, input().split()))
palavra3 = verso3[-1][::-1].strip(",")
verso4 = list(map(str, input().split()))
palavra4 = verso4[-1][::-1].strip(",")
for i in range(len(palavra1)):
    if palavra1[i] == palavra3[i]:
        beleza += 1
    else:
        break
for i in range(len(palavra2)):
    if palavra2[i] == palavra4[i]:
        beleza += 1
    else:
        break
print(beleza)