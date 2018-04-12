import math

def equador(metade):
	soma = 0
	for indice, numero in enumerate(lista):
		soma += numero
		if soma >= metade:
			return indice+1

qtd = input()
lista = [int(i) for i in input().split()]
print(equador(math.ceil(sum(lista)/2)))