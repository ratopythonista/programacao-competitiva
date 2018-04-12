qtd = int(input())
resp = "YES"
j1, j2 = 1, 2
es = 3
w = int(input())

if w == es:
    resp = "NO"
if w == j1:
    j2, es = es, j2
else:
    j1, es = es, j1

for _ in range(qtd-1):
    w = int(input())
    if w == es:
        resp = "NO"
    if w == j1:
        j2, es = es, j2
    else:
        j1, es = es, j1
    
print(resp)  