num = input()
raiz = int(int(num)**(.5))
while raiz > 0:
	resposta = str(raiz**2)
	qtd = 0
	for i in range(len(num)):
		if num[i] == resposta[qtd]:
			qtd += 1
			if qtd == len(resposta):
				print(len(num) - qtd)
				exit()
	raiz -= 1
print(-1) 