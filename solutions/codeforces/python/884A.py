n, t = [int(i) for i in input().split()]
dias = [int(i) for i in input().split()]
qtd = 0
for dia in dias:
    l = 86400 - dia
    t = t - l
    qtd = qtd + 1
    if t <= 0:
        break
print(qtd)