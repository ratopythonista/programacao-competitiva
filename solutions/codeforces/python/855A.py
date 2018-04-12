nomes = {}
qtd = int(input())
for _ in range(qtd):
    nome = input()
    if nome not in nomes:
        nomes[nome] = True
        print("NO")
    else:
        print("YES")