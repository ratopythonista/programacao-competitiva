n = int(input())
k = int(input())
vetor = []

for i in range(n):
	a = int(input())
	vetor.append(a)	
vetor.sort(reverse=True)

qtd = k
i   = k

while(i<n):
	if(vetor[i]==vetor[k-1]):
		qtd = qtd+1
	else:
		break
	i = i+1
	
print(qtd)
	
	 




