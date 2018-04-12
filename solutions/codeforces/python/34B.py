vet, qtd = [int(i) for i in input().split()]
vet = sorted([int(i) for i in input().split()])
soma = sum(vet[:qtd])
print(soma*-1 if soma <=0 else 0)